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

using namespace std;

using ll = long long;
using ld = long double;

const ll N = 1'000'000'000'000L;

#define ab(x) (((x) < 0) ? -(x) : (x))

ll M = 1e9 + 7;

// int dp[1001][26][26];

// memset(dp, -1, sizeof(dp));

void solve()
{
    int n, q;
    cin >> n >> q;

    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    vector<vector<int>> query(q, vector<int>(2, 0));

    for (auto &x : query)
    {
        cin >> x[0] >> x[1];
    }

    int count1 = accumulate(vec.begin(), vec.end(), 0ll);

    for (auto &qq : query)
    {
        if (qq[0] == 1)
        {
            if (vec[qq[1] - 1] == 1)
            {
                count1 -= 1;
                vec[qq[1] - 1] = 0;
            }
            else
            {
                count1 += 1;
                vec[qq[1] - 1] = 1;
            }
        }
        else
        {
            if (qq[1] > count1)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

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