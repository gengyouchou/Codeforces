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

const ll N = 1'000'000'000'000L;

#define ab(x) (((x) < 0) ? -(x) : (x))

ll M = 1e9 + 7;

// int dp[1001][26][26];

// memset(dp, -1, sizeof(dp));

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    vector<ll> cnt(n + 1, 0), mx(n + 1, 0);

    for (auto &x : vec)
    {
        if (x <= n)
        {
            ++cnt[x];
        }
    }

    ll ans = 0;

    for (int x = 1; x <= n; ++x)
    {
        int cur = x;

        while (cur <= n)
        {
            mx[cur] += cnt[x];

            ans = max(ans, mx[cur]);

            cur += x;
        }
    }

    cout << ans;
}

// 3 4 4 4
// 4 5 5 5 5 ..... 8 16 32
// 1 2 3 4 5            32

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

// 3
// 3
// 3
// 5
// 0
// 4
// 4

// =====
// Used: 15 ms, 0 KB