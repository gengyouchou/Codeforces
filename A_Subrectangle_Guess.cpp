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
    int m, n;
    cin >> m >> n;

    vector<vector<int>> vec(m, vector<int>(n, 0));
    for (auto &x : vec)
    {
        for (auto &y : x)
        {
            cin >> y;
        }
    }

    int mxi = 0, mxj = 0;
    int curmx = vec[0][0];

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (vec[i][j] > curmx)
            {
                mxi = i;
                mxj = j;
                curmx = vec[i][j];
            }
        }
    }

    vector<vector<ll>> dict = {{0, 0}, {0, n - 1}, {m - 1, 0}, {m - 1, n - 1}};

    ll ans = 0;

    for (auto &x : dict)
    {
        ans = max(ans, (ab(x[0] - mxi) + 1) * (ab(x[1] - mxj) + 1));
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