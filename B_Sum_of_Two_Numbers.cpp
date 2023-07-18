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

    int l = 0, r = n;

    while (l < r)
    {

        int mid = l + (r - l) / 2;

        int a = n - mid;
        int b = mid;

        ll counta = 0, countb = 0;

        while (a > 0)
        {
            counta += a % 10;

            a /= 10;
        }

        while (b > 0)
        {
            countb += b % 10;
            b /= 10;
        }

        if (ab(counta - countb) <= 1)
        {
            cout << n - mid << " " << mid;
            return;
        }

        if (counta > countb)
        {
            l = mid + 1;
        }
        else
        {
            r = mid;
        }
    }
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