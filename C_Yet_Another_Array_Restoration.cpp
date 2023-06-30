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
    int n, x, y;
    cin >> n >> x >> y;

    int d = 0;

    for (int i = 1; i <= 50; ++i)
    {
        if ((y - x) % i == 0 && (y - x) / i - 1 <= n - 2)
        {
            d = i;
            break;
        }
    }

    int tmpx = x, tmpy = y;

    while (tmpx <= tmpy)
    {
        cout << tmpx << " ";
        tmpx += d;
        --n;
    }

    while (x - d > 0 && n > 0)
    {
        cout << x - d << " ";
        x = x - d;
        --n;
    }

    while (n > 0)
    {
        cout << y + d << " ";
        y = y + d;
        --n;
    }
}

// 8 23 18 13 3

// 3 8 13 18 23

// 10 20 30 40 50

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