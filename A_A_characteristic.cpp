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

// int dp[1001][26][26];

// memset(dp, -1, sizeof(dp));

void solve()
{
    int n, k;
    cin >> n >> k;

    for (int cnt1 = 0; cnt1 <= n; ++cnt1)
    {
        int cnt0 = n - cnt1;

        if (cnt1 * (cnt1 - 1) / 2 + cnt0 * (cnt0 - 1) / 2 == k)
        {
            cout << "YES" << endl;
            for (int i = 0; i < cnt1; ++i)
            {
                cout << 1 << " ";
            }

            for (int i = 0; i < cnt0; ++i)
            {
                cout << -1 << " ";
            }

            return;
        }
    }

    cout << "NO";
}

// numbers of 1 equal to cnt1

// number of pair equal to cnt1*(cnt1-1)/2

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