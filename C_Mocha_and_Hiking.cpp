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
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    if (vec[0] == 1)
    {
        cout << n + 1 << " ";
        for (int i = 1; i < n + 1; ++i)
        {
            cout << i << " ";
        }

        return;
    }

    if (vec[n - 1] == 0)
    {

        for (int i = 1; i < n + 1; ++i)
        {
            cout << i << " ";
        }

        cout << n + 1 << " ";

        return;
    }

    for (int i = 0; i + 1 < n; ++i)
    {
        if (vec[i] == 0 && vec[i + 1] == 1)
        {
            int left = i + 1, right = i + 2;

            for (int j = 1; j < n + 1; ++j)
            {
                cout << j << " ";

                if (left == j)
                {
                    cout << n + 1 << " ";
                }
            }

            return;
        }
    }

    cout << -1;
}

// 1 -> 2 -> 3
//   ->           4
//        <-
//             ->

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