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
    int n, sum;
    cin >> n >> sum;
    vector<vector<int>> vec(n, vector<int>(2, 0));
    for (auto &x : vec)
    {
        cin >> x[0] >> x[1];
    }

    int sumMn = 0, sumMx = 0;

    for (auto &x : vec)
    {
        sumMn += x[0];
        sumMx += x[1];
    }

    if (sumMn <= sum && sumMx >= sum)
    {
        for (auto &x : vec)
        {
            if (sum == sumMn)
            {
                break;
            }

            int diff = x[1] - x[0];

            int mnDiff = min(sum - sumMn, diff);

            x[0] += mnDiff;
            sum -= mnDiff;
        }

        cout << "YES" << endl;

        for (auto &x : vec)
        {
            cout << x[0] << " ";
        }
    }
    else
    {
        cout << "NO" << endl;
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