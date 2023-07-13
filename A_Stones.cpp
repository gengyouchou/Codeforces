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

int dp[101][101][101];

int dfs(int a, int b, int c)
{
    if (dp[a][b][c] != -1)
    {
        return dp[a][b][c];
    }

    int ret1 = 0, ret2 = 0;

    if (a >= 1 && b >= 2)
    {
        ret1 = 3 + dfs(a - 1, b - 2, c);
    }

    if (b >= 1 && c >= 2)
    {
        ret2 = 3 + dfs(a, b - 1, c - 2);
    }

    return dp[a][b][c] = max(ret1, ret2);
}

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << dfs(a, b, c);
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
        memset(dp, -1, sizeof(dp));
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