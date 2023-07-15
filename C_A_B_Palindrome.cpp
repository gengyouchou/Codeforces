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
    int a, b;
    cin >> a >> b;

    string s;
    cin >> s;

    int n = s.size();

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '?')
        {
            s[i] = s[n - i - 1];
        }

        if (s[i] == '0')
        {
            --a;
        }

        if (s[i] == '1')
        {
            --b;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '?' && i != n - i - 1)
        {
            if (a >= 2) // a=0, b=1;
            {
                s[i] = '0';
                s[n - i - 1] = '0';
                a -= 2;
            }
            else if (b >= 2)
            {
                s[i] = '1';
                s[n - i - 1] = '1';
                b -= 2;
            }
        }
        else if (s[i] == '?')
        {
            if (a >= 1)
            {
                s[i] = '0';
                --a;
            }
            else if (b >= 1)
            {
                s[i] = '1';
                --b;
            }
        }
    }

    string t = s;
    reverse(s.begin(), s.end());

    if (t == s && a == 0 && b == 0)
    {
        cout << s;
    }
    else
    {
        cout << -1;
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