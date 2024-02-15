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

    string s;
    cin >> s;

    vector<vector<char>> ans(n, vector<char>(n, 's'));

    for (int i = 0; i < n; ++i)
    {

        ans[i][i] = 'X';

        if (s[i] == '1')
        {

            for (int j = 0; j < n; ++j)
            {

                if (i != j)
                {
                    ans[i][j] = '=';
                    ans[j][i] = '=';
                }
            }
        }
        else if (s[i] == '2')
        {
            bool finded = false;

            for (int j = 0; j < n; ++j)
            {
                if (i != j && s[j] == '2' && ans[i][j] == 's')
                {
                    ans[i][j] = '+';
                    ans[j][i] = '-';
                    finded = true;
                    break;
                }
            }

            if (finded == false)
            {
                cout << "NO";
                return;
            }
        }
    }

    cout << "YES" << endl;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (ans[i][j] == 's')
            {
                ans[i][j] = '=';
            }
            cout << ans[i][j];
        }

        cout << endl;
    }
}

// 1 : a player wants not to lose any game (i. e. finish the tournament with zero losses);
// 2 : a player wants to win at least one game.

// 2122

// 0123

// X--+
// +X++
// +-X-
// --+X

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