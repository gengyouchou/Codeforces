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
    int m, n;
    cin >> m >> n;
    vector<vector<int>> vec(m, vector<int>(n, 0));

    for (auto &x : vec)
    {
        for (auto &y : x)
        {
            cin >> y;
        }
    }

    int neg = 0, zero = 0;

    ll sum = 0;
    int mn = INT_MAX;

    for (auto x : vec)
    {
        for (auto y : x)
        {
            if (y < 0)
            {
                ++neg;
            }

            if (y == 0)
            {
                ++zero;
            }

            sum += ab(y);
            mn = min(mn, ab(y));
        }
    }

    if (neg % 2 == 0 || zero > 0)
    {
        cout << sum;
    }
    else
    {
        cout << sum - 2 * mn;
    }

    // -1 -1 0   -1 -1
    // -1 -1 -1  -1  1
    // -1  1  1  1  -1
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