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

    vector<string> vec(3);
    for (auto &x : vec)
    {
        cin >> x;
    }

    for (int i = 0; i < 3; ++i)
    {
        int j = 0;
        if (vec[i][j] != '.' && vec[i][j] == vec[i][j + 1] && vec[i][j + 1] == vec[i][j + 2])
        {
            cout << vec[i][j];
            return;
        }
    }

    for (int j = 0; j < 3; ++j)
    {
        int i = 0;
        if (vec[i][j] != '.' && vec[i][j] == vec[i + 1][j] && vec[i + 1][j] == vec[i + 2][j])
        {
            cout << vec[i][j];
            return;
        }
    }

    int j = 0, i = 0;

    if (vec[i][j] != '.' && vec[i][j] == vec[i + 1][j + 1] && vec[i + 1][j + 1] == vec[i + 2][j + 2])
    {
        cout << vec[i][j];
        return;
    }

    j = 2, i = 0;

    if (vec[i][j] != '.' && vec[i][j] == vec[i + 1][j - 1] && vec[i + 1][j - 1] == vec[i + 2][j - 2])
    {
        cout << vec[i][j];
        return;
    }

    cout << "DRAW";
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