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

    unordered_set<int> se(vec.begin(), vec.end());

    if (se.size() == 1)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

    int diffpos = -1;

    for (int i = 0; i < n; ++i)
    {
        if (vec[0] != vec[i])
        {
            cout << 1 << " " << i + 1 << endl;
            diffpos = i + 1;
        }
    }

    for (int i = 1; i < n; ++i)
    {
        if (vec[0] == vec[i])
        {
            cout << i + 1 << " " << diffpos << endl;
        }
    }
}

// {1, 2}, {1, 2}, {1, 3}
// {3, 1}

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