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
    int n, m;
    cin >> n >> m;

    vector<ll> nr(6, 0), mr(6, 0);

    for (int i = 1; i <= n; ++i)
    {
        ++nr[i % 5];
    }

    for (int i = 1; i <= m; ++i)
    {
        ++mr[i % 5];
    }

    ll ans = 0;

    for (int i = 0; i < 6; ++i)
    {
        ans += mr[i] * nr[(5 - i) % 5];
    }

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