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

    string a, b;
    cin >> a >> b;

    int countl = 0;

    for (int i = 0; i < n; ++i)
    {
        if (a[i] != b[i])
        {
            ++countl;
        }
    }

    reverse(b.begin(), b.end());

    int countr = 0;

    for (int i = 0; i < n; ++i)
    {
        if (a[i] != b[i])
        {
            ++countr;
        }
    }

    if (countl <= 1)
    {
        cout << countl;
        return;
    }

    if (countr == 0)
    {
        cout << 2;
        return;
    }

    int ans1 = countl * 2 - (countl % 2); // no need reverse if countl is odd, game over
    int ans2 = countr * 2 - ((countr + 1) % 2); // no need to reverse if countr is even

    cout << min(ans1, ans2);
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