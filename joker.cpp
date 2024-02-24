#include <algorithm>
#include <array>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <functional> // std::minus
#include <iostream>
#include <map>
#include <math.h>
#include <numeric> // std::accumulate
#include <queue>
#include <set>
#include <stack>
#include <stdio.h>
#include <string.h>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

// setprecision example
#include <iomanip> // std::setprecision

using namespace std;

using ll = long long;
using ld = long double;
using ull = unsigned long long;

const ll N = 1000000000000L;

#define ab(x) (((x) < 0) ? -(x) : (x))

ll M = 1e9 + 7;

// int dp[1001][26][26];

// memset(dp, -1, sizeof(dp));

#include <algorithm>
#include <iostream>
#include <set>
#include <unordered_map>
#include <vector>

using namespace std;

// 0x102 = 0001 0000 0010

// tast case:

// 10
// 0x10a 0x10b 0x10c 0x10d 0x10e
// 0x109 0x10a 0x10b 0x10c 0x10d
// 0x106 0x202 0x302 0x402 0x502
// 0x102 0x202 0x302 0x103 0x203
// 0x102 0x107 0x102 0x102 0x103
// 0x102 0x103 0x104 0x305 0x106
// 0x102 0x202 0x302 0x103 0x104
// 0x102 0x202 0x306 0x404 0x504
// 0x102 0x202 0x301 0x103 0x104
// 0x107 0x202 0x306 0x405 0x504

const int num[] = {0x102, 0x103, 0x104, 0x105, 0x106, 0x107, 0x108, 0x109, 0x10a, 0x10b, 0x10c, 0x10d, 0x10e,
                   0x202, 0x203, 0x204, 0x205, 0x206, 0x207, 0x208, 0x209, 0x20a, 0x20b, 0x20c, 0x20d, 0x20e,
                   0x302, 0x303, 0x304, 0x305, 0x306, 0x307, 0x308, 0x309, 0x30a, 0x30b, 0x30c, 0x30d, 0x30e,
                   0x402, 0x403, 0x404, 0x405, 0x406, 0x407, 0x408, 0x409, 0x40a, 0x40b, 0x40c, 0x40d, 0x40e};

int pokerType(const vector<int> cards)
{
    vector<int> suits, ranks;

    for (int card : cards)
    {
        suits.push_back(card >> 8);
        ranks.push_back(card & 0xFF);
    }

    unordered_map<int, int> rankCount;
    for (int rank : ranks)
    {
        // cout << rank << " ";
        ++rankCount[rank];
    }

    // cout << endl;

    // for (int suit : suits)
    // {
    //     cout << suit << " ";
    // }

    // cout << endl;

    sort(ranks.begin(), ranks.end());

    auto isStraight = [](const vector<int> &ranks)
    {
        if (ranks[4] - ranks[0] == 4 && set<int>(ranks.begin(), ranks.end()).size() == 5)
        {
            return true;
        }

        // Check for A-2-3-4-5 straight
        else if (ranks == vector<int>{0x02, 0x03, 0x04, 0x05, 0x0e})
        {
            return true;
        }

        return false;
    };

    auto isFlush = [](const vector<int> &suits)
    {
        return set<int>(suits.begin(), suits.end()).size() == 1;
    };

    if (isFlush(suits) && ranks == vector<int>{0x0a, 0x0b, 0x0c, 0x0d, 0x0e})
    {
        // 10,J,Q,K,A
        return 1;
    }

    if (isFlush(suits) && isStraight(ranks))
    {
        return 2;
    }

    if (any_of(rankCount.begin(), rankCount.end(), [](const pair<int, int> &pair)
               { return pair.second == 4; }))
    {
        return 3;
    }

    if (any_of(rankCount.begin(), rankCount.end(), [](const pair<int, int> &pair)
               { return pair.second == 3; }) &&
        any_of(rankCount.begin(), rankCount.end(), [](const pair<int, int> &pair)
               { return pair.second == 2; }))
    {
        return 4;
    }

    if (isFlush(suits))
    {
        return 5;
    }

    if (isStraight(ranks))
    {
        return 6;
    }

    if (any_of(rankCount.begin(), rankCount.end(), [](const pair<int, int> &pair)
               { return pair.second == 3; }))
    {
        return 7;
    }

    if (count_if(rankCount.begin(), rankCount.end(), [](const pair<int, int> &pair)
                 { return pair.second == 2; }) == 2)
    {
        return 8;
    }

    if (any_of(rankCount.begin(), rankCount.end(), [](const pair<int, int> &pair)
               { return pair.second == 2; }))
    {
        return 9;
    }

    return 10;
}

int f(const std::vector<int> &input)
{
    int countJokers = 0;

    vector<int> temp;

    for (auto &x : input)
    {
        if (x == 0x50f || x == 0x610)
        {
            ++countJokers;
        }
        else
        {
            temp.push_back(x);
        }
    }

    // cout << "countJokers : " << countJokers;

    int ans = 11;

    for (int i = 0; i < 52; ++i)
    {
        int jokers1 = num[i];
        for (int j = 0; j < 52; ++j)
        {
            int count = countJokers;
            int count2 = 0;
            int jokers2 = num[j];

            if (--count >= 0)
            {
                temp.push_back(jokers1);
                ++count2;
            }

            if (--count >= 0)
            {
                temp.push_back(jokers2);
                ++count2;
            }

            ans = min(ans, pokerType(temp));

            while (--count2 >= 0)
            {
                temp.pop_back();
            }
        }
    }

    return ans;
}

int solve()
{
    int n = 5;
    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> hex >> x;
        // cout << hex << x << " ";
    }

    // cout << endl;

    int countJokers = 0;

    vector<int> temp;

    for (auto &x : vec)
    {
        if (x == 0x50f || x == 0x610)
        {
            ++countJokers;
        }
        else
        {
            temp.push_back(x);
        }
    }

    // cout << "countJokers : " << countJokers;

    int ans = 11;

    for (int i = 0; i < 52; ++i)
    {
        int jokers1 = num[i];
        for (int j = 0; j < 52; ++j)
        {
            int count = countJokers;
            int count2 = 0;
            int jokers2 = num[j];

            if (--count >= 0)
            {
                temp.push_back(jokers1);
                ++count2;
            }

            if (--count >= 0)
            {
                temp.push_back(jokers2);
                ++count2;
            }

            ans = min(ans, pokerType(temp));

            while (--count2 >= 0)
            {
                temp.pop_back();
            }
        }
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;

    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        solve();

        // if (solve())
        // {
        //     cout << "YES";
        // }
        // else
        // {
        //     cout << "NO";
        // }

        cout << endl;
    }
}
