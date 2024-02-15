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
    int n, l, k, h;
    cin >> n >> l >> k >> h;

    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    vector<int> diff(l - 1, 0);

    int steps = 0;

    for (int i = 0; i < l - 1; ++i)
    {
        steps += k;
        diff[i] = steps;

        // cout << diff[i] << " ";
    }

    int count = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < l - 1; ++j)
        {
            if (ab(vec[i] - h) == diff[j])
            {
                ++count;
                break;
            }
        }
    }

    cout << count;
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