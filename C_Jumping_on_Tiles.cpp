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
    string s;
    cin >> s;

    int n = s.size();

    map<char, vector<int>> m;

    for (int i = 0; i < n; ++i)
    {
        m[s[i]].push_back(i + 1);
    }

    char start = s[0], end = s[n - 1];

    char cur = start;

    vector<int> ans;

    while (cur != end)
    {
        auto v = m[cur];

        for (int i = 0; i < v.size(); ++i)
        {
            ans.push_back(v[i]);
        }

        if (cur > end)
        {
            --cur;
        }
        else
        {
            ++cur;
        }
    }

    auto v = m[cur];

    for (int i = 0; i < v.size(); ++i)
    {
        ans.push_back(v[i]);
    }

    cout << ab(end - start) << " " << ans.size() << endl;

    for (auto &x : ans)
    {
        cout << x << " ";
    }
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