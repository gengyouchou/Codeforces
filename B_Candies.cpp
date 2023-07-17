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

    if (n % 2 == 0)
    {
        cout << -1;
        return;
    }

    vector<int> ans;

    while (n > 1)
    {
        if (((n - 1) / 2) % 2 == 1)
        {
            n = (n - 1) / 2;
            ans.push_back(2);
        }
        else if (((n + 1) / 2) % 2 == 1)
        {
            n = (n + 1) / 2;
            ans.push_back(1);
        }
    }

    // 17 16/2 18/2
    // 9  8/2  10/2
    //

    if (ans.size() > 40)
    {
        cout << -1;
        return;
    }

    cout << ans.size() << endl;

    for (int i = ans.size() - 1; i >= 0; --i)
    {
        cout << ans[i] << " ";
    }
}

// *2+1 = (n-1)/2
// *2-1 = (n+1)/2

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