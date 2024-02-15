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
    int n, m, x, y;
    cin >> n >> m >> x >> y;

    vector<string> vec(n);

    for (auto &v : vec)
    {
        cin >> v;
    }

    ll county = 0, countx = 0;

    for (auto &v : vec)
    {

        int len = v.size();

        int j = 0;

        while (j < len)
        {
            if (j + 1 < len && v[j] == '.' && v[j + 1] == '.')
            {
                ++county;
                j += 2;
            }
            else if (v[j] == '.')
            {
                ++countx;
                ++j;
            }
            else
            {
                ++j;
            }
        }
    }

    if (x <= y / 2)
    {
        cout << (countx + 2 * county) * x;
    }
    else
    {
        cout << countx * x + county * y;
    }
}

// ...
// *..

// *....**.*..

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