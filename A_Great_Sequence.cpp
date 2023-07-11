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
    ll n, u;
    cin >> n >> u;

    vector<ll> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    map<ll, int> mp;

    for (auto &x : vec)
    {
        ++mp[x];
    }

    int count = 0;

    while (mp.size() > 0)
    {
        ll x = mp.begin()->first;
        ll cur = x * u;

        if (mp.count(cur) && mp[cur] > 0)
        {
            --mp[cur];

            if (mp[cur] == 0)
            {
                mp.erase(cur);
            }
        }
        else
        {
            ++count;
        }

        --mp[x];

        if (mp[x] == 0)
        {
            mp.erase(x);
        }
    }

    cout << count;
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