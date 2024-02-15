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

struct cmp1
{
    bool operator()(const pair<int, int> &a, const pair<int, int> &b)
    {
        return (a.first < b.first) || (a.first == b.first && a.second > b.second);
    }
};

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp1> pq;

    for (int i = 0; i < n; ++i)
    {
        pq.push({vec[i] % k + k, i});
    }

    vector<int> ans;

    while (!pq.empty())
    {
        pair<int, int> cur = pq.top();
        pq.pop();

        // cout << cur.first << " ";

        cur.first -= k;

        if (cur.first <= 0)
        {
            ans.push_back(cur.second + 1);
        }
        else
        {
            pq.push(cur);
        }
    }

    // cout << ":";

    for (auto &x : ans)
    {
        cout << x << " ";
    }
}

// 16 12  9
// 12 12  9
// 8  12  9
// 8  8   9
// 8  8   5
// 4  8   5
// 4  4   5
// 4  4   1
// 0  4   1
// 0  0   1

// 17 14  13
// 13 14  13
// 9  14  13
// 9  14  9
// 9

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