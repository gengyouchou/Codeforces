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

void solve()
{
    int n, t;
    cin >> n >> t;
    vector<int> seg(n);
    for (auto &x : seg)
    {
        cin >> x;
    }

    vector<int> cost(n);
    for (auto &x : cost)
    {
        cin >> x;
    }

    int mxCost = 0;
    int mxIdx = -2;

    for (int i = 0; i < n; ++i)
    {

        if (t >= seg[i])
        {

            if (cost[i] > mxCost)
            {
                mxCost = cost[i];
                mxIdx = i;
            }
        }
        --t;
    }

    cout << mxIdx + 1;
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