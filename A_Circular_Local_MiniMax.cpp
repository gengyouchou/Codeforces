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

    if (n % 2 == 1)
    {
        cout << "NO";
        return;
    }

    sort(vec.begin(), vec.end());

    vector<int> ans;

    int i = 0, j = n / 2;
    int count = 0;

    while (count < n)
    {
        if (count % 2 == 0)
        {
            ans.push_back(vec[i]);
            ++i;
        }
        else
        {
            ans.push_back(vec[j]);
            ++j;
        }

        ++count;
    }

    for (int i = 0; i + 1 < n; ++i)
    {

        if (ans[i] == ans[i + 1])
        {
            cout << "NO";
            return;
        }
    }

    cout << "YES" << endl;

    for (auto &x : ans)
    {
        cout << x << " ";
    }
}

// 0 2 1

// 2 0 1

//  1 2 3 4
//   5 6 7 8

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;

    cin >> t;

    for (int i = 0; i < t; ++i)
    {

        // if (t == 28385 && i == 1434)
        // {
        //     int n;
        //     cin >> n;
        //     vector<int> vec(n);
        //     for (auto &x : vec)
        //     {
        //         cin >> x;
        //         cout << x << " ";
        //     }

        //     cout << endl;
        // }

        // if (t == 28385)
        //     continue;

        solve();

        cout << endl;
    }
}