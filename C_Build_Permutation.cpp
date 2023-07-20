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

    int num = 0;

    while (num * num < 2 * n)
    {
        ++num;
    }

    ++num;

    vector<int> ans(n, -1);

    for (int i = n - 1; i >= 0; --i)
    {

        for (int j = num; j >= 0; --j)
        {
            int x = j * j - i;

            if (x >= 0 && x < n && ans[x] == -1)
            {
                ans[x] = i;
                break;
            }
        }
    }

    for (auto &cur : ans)
    {
        cout << cur << " ";
    }
}

//

// 0 1 2 3 4 5
// 1 0 2 1 5 4

// 1 0 2 6 5 4 3
// 0 1 2 3 4 5 6

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