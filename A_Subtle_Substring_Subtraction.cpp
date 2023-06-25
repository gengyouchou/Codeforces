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

    string s;
    cin >> s;

    int n = s.size();

    ll sum = 0;
    for (auto &c : s)
    {
        sum += c - 'a' + 1;
    }

    if (n == 1)
    {
        cout << "Bob"
             << " " << sum;
    }
    else
    {
        int subs = 0;

        if (n % 2 == 1)
        {
            subs = min(s[0] - 'a' + 1, s[n - 1] - 'a' + 1);
        }
        cout << "Alice"
             << " " << sum - 2 * subs;
    }
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