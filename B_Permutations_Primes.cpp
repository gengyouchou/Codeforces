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

const ll N = 1e6;

#define ab(x) (((x) < 0) ? -(x) : (x))

ll M = 1e9 + 7;

// int dp[1001][26][26];

// memset(dp, -1, sizeof(dp));

std::vector<bool> flag(N + 1, true);

void solve()
{
    int n;

    cin >> n;

    if (n == 2)
    {
        cout << 1 << " " << 2;
        return;
    }

    if (n == 1)
    {
        cout << 1;
        return;
    }

    vector<int> ans(n, 0);

    int mid = n / 2;

    int cur = 4;

    ans[0] = 2;

    ans[n - 1] = 3;

    for (int i = 1; i < n - 1; ++i)
    {
        if (i == mid)
        {
            ans[i] = 1;
        }
        else
        {
            ans[i] = cur;
            ++cur;
        }
    }

    for (auto &x : ans)
    {
        cout << x << " ";
    }
}

// 5 1 2 4 6 7 8 9 3

// 3 5 7 11
// 1 2 4 6 8 9 10 {7 11}

// 3 5 1 2 4

// 1 4 2 3 5

// 5 7

// 7 6 5 2 1 4 3

// 5 2 1 4 3 6 8 9 7

// 5 1 4 2 3

// 5 2 1 4 3

// 1
// 1 4
//

// 1
// 1 3
// 1 4
// 3 1 4
// 1 4 5
// 2 3 1 4
// 3 1 4 5

// 5 1
// 1 4
// 5 1 4
// 1 4 2
//

// 5 2 1 4 3

// 1 2 3

// 2 1 3
// 1
// 2 1
// 3 1

// 1
// 1 2
//

// 1 4 3 5 2

// 1
// 1 4
//

// 3 4 1 5 2

// 1
// 4 1
// 1 5
// 3 4 1
// 4 1 5
// 1 5 2
//

// 1 3 2

// 10 9 8 5 2 1 4 3 6 7 11

// 1
// 2 1
// 1 4
// 5 2 1
// 2 1 4
// 1 4 3
// 5 2 1 4
// 2 1 4 3

// 2 4 1 5 3

// 1
// 4 1
// 1 5
// 2 4 1
// 1 5 3
//

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;

    cin >> t;

    // if (flag[4] == true)
    // {

    //     flag[0] = flag[1] = false; // exclude 0 and 1

    //     for (int i = 2; i * i <= N; ++i)
    //     {

    //         if (flag[i])
    //         {
    //             for (int j = i * i; j <= N; j += i)
    //                 flag[j] = false;
    //         }
    //     }
    // }

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