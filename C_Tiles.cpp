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

ll M = 998244353;

// int dp[1001][26][26];

// memset(dp, -1, sizeof(dp));

ll powMod(ll a, ll n)
{
    ll res = 1;

    while (n > 0)
    {
        if (n % 2 == 1)
        {
            res *= a;
            res %= M;
        }

        a = a * a;
        a %= M;

        n = n / 2;
    }

    return res;
}

// 2^5 = 2 * (2^2)^2 

void solve()
{
    ll m, n;
    cin >> m >> n;

    ll ans = powMod(2, m + n);

    cout << ans;
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