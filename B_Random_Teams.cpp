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
    int n, m;
    cin >> n >> m;

    ll mx = n - m + 1;
    ll mn = n / m;
    ll r = n % m;

    ll cmn = mn * (mn - 1) / 2 * (m - r) + (mn + 1) * (mn) / 2 * r;

    ll cmx = mx * (mx - 1) / 2;

    cout << cmn << " " << cmx;
}

// 1 2 3 4 5
// {1, 2}, {1, 3}, {1, 4}, {1, 5}
// {2, 3}, {2, 4}, {2, 5}
// {3, 4}, {3, 5}
// {4, 5}

// n*(n-1)/2 = 5*(5-1)/2

// 5 3
// 3 3
// 2 3

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