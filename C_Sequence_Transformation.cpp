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
    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    vector<int> nums;

    for (int i = 0; i < n; ++i)
    {
        if (!nums.empty() && nums.back() == vec[i])
        {
            continue;
        }

        nums.push_back(vec[i]);
    }

    unordered_map<int, vector<int>> mp;

    int m = nums.size();

    for (int i = 0; i < m; ++i)
    {
        mp[nums[i]].push_back(i);
    }

    ll ans = INT_MAX;

    for (auto [val, v] : mp)
    {

        int len = v.size();

        ll count = len + 1;

        if (v[0] - 1 < 0)
        {
            --count;
        }

        if (v[len - 1] + 1 == m)
        {
            --count;
        }

        ans = min(ans, count);
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