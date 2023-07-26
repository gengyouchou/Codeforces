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

    if (n % 2 == 1)
    {

        // 1 2 3
        // 1 3 2

        cout << 0;
        return;
    }

    // 1 2 3 4
    // 2 1 4 3

    ll count = 1;
    ll M = 998244353;

    for (ll i = 1; i <= n / 2; ++i)
    {
        count *= i;
        count %= M;
    }

    cout << count * count % M;
}

// even = (n / 2 * (n / 2-1) * (n / 2- 2) * … 1)

// odd = (n / 2 * (n / 2 - 1) * (n / 2 - 2) * … 1)

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