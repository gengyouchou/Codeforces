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
    int n;
    cin >> n;

    string s;
    cin >> s;

    int left = -1;

    for (int i = 0; i + 1 < n; ++i)
    {
        if (s[i] < s[i + 1])
        {
            left = i;
            break;
        }
    }

    if (left != -1)
    {
        string rs = s.substr(0, left + 1);
        string t = rs;
        reverse(rs.begin(), rs.end());

        cout << t + rs;
    }
    else
    {
        cout << s[0] << s[0];
    }
}

// cba|cbacba
// cba abc

// gfedcba

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