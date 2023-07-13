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
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    sort(vec.begin(), vec.end());

    int i = 0, j = n - 1;

    while (i < j && k > 0)
    {
        if (i + 1 < j && vec[i] + vec[i + 1] <= vec[j])
        {
            i += 2;
        }
        else
        {
            --j;
        }

        --k;
    }

    ll sum = 0;

    for (int p = i; p <= j; ++p)
    {
        sum += vec[p];
    }

    cout << sum;
}

// 15 22 12 10 13 11
// 10 11 12 13 15 22

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