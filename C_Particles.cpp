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
    ll n;
    cin >> n;
    vector<ll> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    vector<ll> ans;

    ll ret = 0;

    for (int i = 0; i < n; ++i)
    {
        if (vec[i] < 0)
        {
            if (i + 1 < n)
            {
                if (ans.size() > 0)
                {
                    ans.back() += vec[i + 1];
                }
                else
                {
                    ans.push_back(vec[i + 1]);
                }
                ++i;
            }
        }
        else
        {
            ans.push_back(vec[i]);
        }
    }

    ret = *max_element(vec.begin(), vec.end());

    for (auto &x : ans)
    {
        // cout << x << " ";

        ret = max(ret, x);
    }

    // cout << endl;

    for (int i = 0; i + 2 < ans.size(); i += 2)
    {
        ans[i + 2] = max(ans[i] + ans[i + 2], ans[i + 1]);
        ret = max(ret, ans[i + 2]);
    }

    cout << ret;
}

// 1 9
// -2 4 2 100 50 -1 80 -1

// 4 100 2 120 2 3

// 100 +

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