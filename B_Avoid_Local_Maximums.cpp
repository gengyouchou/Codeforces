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
    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    vec.push_back(1e9);

    int len = n + 1;

    int count = 0;

    for (int i = 1; i + 2 < len; ++i)
    {
        if (vec[i] > vec[i - 1] && vec[i] > vec[i + 1])
        {
            vec[i + 1] = max(vec[i], vec[i + 2]);
            ++count;
        }
    }

    cout << count << endl;

    for (int i = 0; i < n; ++i)
    {
        int x = vec[i];
        cout << x << " ";
    }
}

// 1 2 1 2 1
// 1 2 2 2 1

// 1 2 1 1 0 1 2 2
// 1 2 2 1 0 1 2 1

// 1 2 1 3 2 3 1 2 1
// 1 2 3 3 2 3 3 2 1

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