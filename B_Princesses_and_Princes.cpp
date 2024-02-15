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

    vector<vector<int>> vec(n, vector<int>());

    for (auto &v : vec)
    {
        int len = 0;
        cin >> len;

        vector<int> list(len, 0);

        for (auto &x : list)
        {
            cin >> x;
        }

        v = list;
    }

    vector<bool> daughter(n, false), princes(n, false);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < vec[i].size(); ++j)
        {
            int cur = vec[i][j] - 1;

            if (princes[cur] == false)
            {
                princes[cur] = true;
                daughter[i] = true;
                break;
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        if (daughter[i] == false)
        {
            for (int j = 0; j < n; ++j)
            {
                if (princes[j] == false)
                {
                    cout << "IMPROVE" << endl;
                    cout << i + 1 << " " << j + 1;
                    return;
                }
            }
        }
    }

    cout << "OPTIMAL";
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