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

    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    vector<vector<ll>> dp(n + 1, vector<ll>(2, 0));

    // dp[i][0] = no lid
    // dp[i][1] = have lid

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '1')
        {
            dp[i + 1][1] = vec[i] + max(dp[i][0], dp[i][1]);
            dp[i + 1][0] = dp[i][0] + (i > 0 ? vec[i - 1] : 0);
        }
        else
        {
            dp[i + 1][0] = dp[i + 1][1] = max(dp[i][0], dp[i][1]);
        }
    }

    cout << max(dp[n][0], dp[n][1]);
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