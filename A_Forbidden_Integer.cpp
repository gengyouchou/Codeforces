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
    int n, k, x;
    cin >> n >> k >> x;

    if ((k == 1 && x == 1) || (k <= 2 && x == 1 && n % 2 == 1))
    {
        cout << "NO";
        return;
    }

    cout << "YES" << endl;

    vector<int> ans;

    if (x != 1)
    {

        for (int i = 1; i <= n; ++i)
        {
            ans.push_back(1);
        }
    }
    else
    {

        int count = n / 2;

        while (count >= 2)
        {
            ans.push_back(2);
            n -= 2;
            --count;
        }
        // 4
        // 3

        if (n == 4)
        {
            ans.push_back(2);
            ans.push_back(2);
        }
        else if (n == 3)
        {
            ans.push_back(3);
        }
        else
        {
            ans.push_back(2);
        }
    }

    int len = ans.size();

    cout << len << endl;

    for (auto &x : ans)
    {
        cout << x << " ";
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