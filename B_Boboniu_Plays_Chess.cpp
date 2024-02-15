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

    vector<vector<bool>> visited(n, vector<bool>(m, false));

    visited[x - 1][y - 1] = true;

    cout << x << " " << y << endl;

    int count = 0;

    for (int i = x - 1; i < 2 * n; ++i)
    {

        int ii = i % n;

        if (count % 2 == 0)
        {

            for (int j = 0; j < m; ++j)
            {
                if (visited[ii][j] == true)
                {
                    continue;
                }

                visited[ii][j] = true;
                cout << ii + 1 << " " << j + 1 << endl;
            }
        }
        else
        {

            for (int j = m - 1; j >= 0; --j)
            {
                if (visited[ii][j] == true)
                {
                    continue;
                }

                visited[ii][j] = true;
                cout << ii + 1 << " " << j + 1 << endl;
            }
        }

        ++count;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

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