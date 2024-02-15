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

bool solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    string res = "";

    int cnt1 = (n - 11) / 2, cnt2 = cnt1;

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '8')
        {
            if (cnt1 > 0)
            {
                --cnt1;
            }
            else
            {
                res.push_back(s[i]);
            }
        }
        else
        {
            if (cnt2 > 0)
            {
                --cnt2;
            }
            else
            {
                res.push_back(s[i]);
            }
        }
    }

    if (res[0] == '8')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    if (solve())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    cout << endl;
}

// 29

// 888111881181818181    18111111111