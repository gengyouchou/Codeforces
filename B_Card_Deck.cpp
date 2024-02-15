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

    stack<int> stk;

    vector<int> ans;

    int curMax = vec[0];

    for (int i = 0; i < n; ++i)
    {
        while (!stk.empty() && curMax < vec[i])
        {
            ans.push_back(stk.top());
            stk.pop();
        }

        stk.push(vec[i]);

        if (stk.size() == 1)
        {
            curMax = stk.top();
        }
    }

    while (!stk.empty())
    {
        ans.push_back(stk.top());
        stk.pop();
    }

    for (int i = n - 1; i >= 0; --i)
    {
        cout << ans[i] << " ";
    }
}

// 1 7 5 2 4 3 6 3 4 5
// 1 3 4 2 5 6 5 4 3 6

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