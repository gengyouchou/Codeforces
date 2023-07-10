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

class UnionFindSet
{
public:
    UnionFindSet(int n)
    {
        parents = vector<int>(n + 1, 0);
        ranks = vector<int>(n + 1, 0);

        for (int i = 0; i < n + 1; ++i)
        {
            parents[i] = i;
        }
    }

    int Find(int x)
    {
        while (x != parents[x])
        {
            parents[x] = parents[parents[x]];
            x = parents[x];
        }

        return x;
    }

    bool Union(int u, int v)
    {
        int pu = Find(u);
        int pv = Find(v);

        if (pu == pv)
        {
            return false;
        }

        if (ranks[pu] > ranks[pv])
        {
            parents[pv] = pu;
            ++ranks[pu];
        }
        else
        {
            parents[pu] = pv;
            ++ranks[pv];
        }

        return true;
    }

private:
    vector<int> parents;
    vector<int> ranks;
};

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> vec(n, vector<int>(2, 0));

    for (auto &x : vec)
    {
        cin >> x[0] >> x[1];
    }

    UnionFindSet s(n);

    for (int i = 0; i < n; ++i)
    {

        for (int j = i + 1; j < n; ++j)
        {
            if (vec[i][0] == vec[j][0] || vec[i][1] == vec[j][1])
            {
                s.Union(i, j);
            }
        }
    }

    unordered_set<int> se;

    for (int i = 0; i < n; ++i)
    {
        se.insert(s.Find(i));
    }

    cout << se.size() - 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

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