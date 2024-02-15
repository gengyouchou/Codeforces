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
    int n;
    cin >> n;

    // unordered_set<int> ser, sec;

    int left = 0, right = 0, up = 0, down = 0;

    for (int i = 0; i < n; ++i)
    {
        int x = 0, y = 0;
        cin >> x >> y;

        if (x < 0)
        {
            left = min(left, x);
        }
        else
        {
            right = max(right, x);
        }

        if (y < 0)
        {
            down = min(down, y);
        }
        else
        {
            up = max(up, y);
        }
    }

    ll sum = ab(2 * left) + ab(2 * right) + ab(2 * up) + ab(2 * down);

    cout << sum;
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

        // if (t == 100 && i == 31)
        // {

        //     int n;
        //     cin >> n;
        //     vector<vector<int>> vec(n, vector<int>(2, 0));
        //     for (auto &x : vec)
        //     {
        //         cin >> x[0] >> x[1];
        //         cout << x[0] << " " << x[1] << endl;
        //     }

        //     continue;
        // }

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