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

int dfs(vector<vector<int>> &graph, int cur, vector<bool> &visited, vector<ll> &count)
{

    // cout << cur << endl;

    visited[cur] = true;

    if (graph[cur].size() == 1 && cur != 1)
    {
        return count[cur] = 1;
    }

    for (auto &g : graph[cur])
    {
        if (visited[g] == true)
        {
            continue;
        }

        visited[g] = true;

        count[cur] += dfs(graph, g, visited, count);
    }

    return count[cur];
}

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> vec(n - 1, vector<int>(2, 0));

    for (auto &x : vec)
    {
        cin >> x[0] >> x[1];

        // cout << x[0] << " " << x[1] << endl;
    }

    int q;
    cin >> q;

    vector<vector<int>> quir(q, vector<int>(2, 0));
    for (auto &x : quir)
    {
        cin >> x[0] >> x[1];
        // cout << x[0] << " " << x[1] << endl;
    }

    vector<vector<int>> graph(n + 1, vector<int>());

    for (auto v : vec)
    {
        graph[v[0]].push_back(v[1]);
        graph[v[1]].push_back(v[0]);
    }

    vector<bool> visited(n + 1, false);

    vector<ll> count(n + 1, 0);

    dfs(graph, 1, visited, count);

    // for (int i = 1; i <= n; ++i)
    // {
    //     //cout << "cur: " << i << " count[cur]: " << count[i] << endl;
    // }

    for (auto qq : quir)
    {
        ll ans = count[qq[0]] * count[qq[1]];

        cout << ans << endl;
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