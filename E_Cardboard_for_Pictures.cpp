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
using ull = unsigned long long;
using ld = long double;

const ll N = 1'000'000'000'000L;

#define ab(x) (((x) < 0) ? -(x) : (x))

ll M = 1e9 + 7;

// int dp[1001][26][26];

// memset(dp, -1, sizeof(dp));

bool tooBigger(vector<ll> &vec, const ll c, ll w)
{

    ll sum = 0;

    for (auto &x : vec)
    {
        sum += (2 * w + x) * (2 * w + x);

        if (sum >= c)
        {
            return true;
        }
    }

    return false;
}

void solve()
{
    ll n, c;
    cin >> n >> c;

    vector<ll> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    ll l = 0, r = sqrt(c);

    while (l < r)
    {

        ll mid = l + (r - l) / 2;

        if (tooBigger(vec, c, mid))
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << l;
}

// (2*w+x)^2+...=c

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