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

class UnionFindSet
{
public:
    UnionFindSet(int n)
    {
        parents = vector<int>(n + 1, 0);
        ranks = vector<int>(n + 1, 0);

        for (int i = 0; i <= n; ++i)
        {
            parents[i] = i;
        }
    }

    int Find(int x)
    {
        while (parents[x] != x)
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
            return false;

        if (ranks[pu] > ranks[pv])
        {
            parents[pv] = pu;
            ++ranks[pu];
        }
        else
        {
            parents[pu] = pv;
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
    vector<vector<int>> vec(2, vector<int>(n));

    for (auto &x : vec)
    {
        for (auto &y : x)
        {
            cin >> y;
        }
    }

    UnionFindSet s(n);

    for (auto &x : vec)
    {
        s.Union(x[0], x[1]);
    }

    unordered_set<int> se;

    for (auto &x : vec)
    {
        for (auto &y : x)
        {
            se.insert(s.Find(y));
        }
    }

    ll cnt = se.size();

    cout << se.size();
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