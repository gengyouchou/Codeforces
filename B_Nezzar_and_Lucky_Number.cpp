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

bool checkOk(int cur, int d)
{
    if (10 * d > cur)
    {
        if (cur % 10 == d)
        {
            return true;
        }
        for (int i = 1; i * d <= cur; ++i)
        {
            if (i * d % 10 == cur % 10)
            {

                // 51= 7 7 7 = 21 + 30
                // 24= 7 7 =14 +10
                return true;
            }
        }
    }
    else
    {
        return true;
    }

    return false;
}

void solve()
{
    int n, d;
    cin >> n >> d;

    for (int i = 0; i < n; ++i)
    {
        int cur;
        cin >> cur;

        if (checkOk(cur, d))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

// 24
// 7 14 21

// 14+3
// 24+3

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