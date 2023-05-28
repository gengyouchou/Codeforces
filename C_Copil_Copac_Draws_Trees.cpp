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

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;

#define mp make_pair
#define pb push_back
#define F first
#define S second
#define ab(x) (((x) < 0) ? -(x) : (x))

bool solve()
{
    int n;
    cin >> n;
    vector<vector<int>> edges(n, vector<int>(2, 0));
    for (auto &e : edges)
    {
        cin >> e[0] >> e[1];
    }

    vector<vector<pair<int, int>>> graph(n, vector<pair<int, int>>());

    int idx = 1;

    for (auto &e : edges)
    {
        graph[e[0]].push_back({e[1], idx});
        graph[e[1]].push_back({e[0], idx});

        ++idx;
    }

    int count = 1;

    vector<bool> visited(n, false);

    visited[1] = true;

    int steps = 0;

    queue<int> q;

    while (!q.empty())
    {

        int len = q.size();

        for (int l = 0; l < len; ++l)
        {

            int cur = q.front();
            q.pop();
            for(auto vec: graph[cur]){
                if(vec.second<)
            }
        }
    }

    cout << steps + 1;

    return true;
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

        cout << endl;
    }
}

// 4 5
// 1 3
// 1 2
// 3 4
// 1 6

// 1 3
// 1 2
// 1 6
// 3 4
// 4 5

//fail