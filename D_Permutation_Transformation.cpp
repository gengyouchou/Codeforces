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

vector<int> ans;

void dfs(vector<int> &vec, int level, int l, int r)
{

    if (l > r)
    {
        return;
    }

    int idx = max_element(vec.begin() + l, vec.begin() + r + 1) - vec.begin();

    // cout << vec[idx] << "";

    ans[idx] = level;

    dfs(vec, level + 1, l, idx - 1);
    dfs(vec, level + 1, idx + 1, r);
}

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    ans = vector<int>(n, 0);

    dfs(vec, 0, 0, n - 1);

    // cout << endl;

    for (auto &x : ans)
    {
        cout << x << " ";
    }
}

// 3 5 2 1 4

// l       r

// l
// r

//     l    r

// 5 3 2 1 4

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