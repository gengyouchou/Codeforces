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

    // odd first one win
    // even second one win

    string ans = "";

    for (int i = 0; i < n; ++i)
    {
        if (vec[i] > 1)
        {
            if (i % 2 == 0)
            {
                ans = "First";
            }
            else
            {
                ans = "Second";
            }

            break;
        }
    }

    if (ans == "")
    {
        if (n % 2 == 1)
        {
            ans = "First";
        }
        else
        {
            ans = "Second";
        }
    }

    cout << ans;
}

// 1 2 3 4 5 6
// f s f s f s

// 2 5 4 1
// f f f f
// s s s

// 1 1 2
// f s f

// 1 2 1
// f s s
// f f x
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