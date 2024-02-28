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

const ll N = 1000000000000L;

#define ab(x) (((x) < 0) ? -(x) : (x))

ll M = 1e9 + 7;

// int dp[1001][26][26];

// memset(dp, -1, sizeof(dp));

// A, B, C string consists only of a and b.
// Either A≤B and C≤B, or B≤A and B≤C must be satisfied.

void solve()
{
    string s;
    cin >> s;

    int n = s.size();

    // left, a, right

    // a must be the smaller one, which meet B≤A and B≤C

    string left = " ", mid = " ", right = " ";

    for (int i = 1; i < n - 1; ++i)
    {
        if (s[i] == 'a')
        {
            left = s.substr(0, i);
            mid = 'a';
            right = s.substr(i + 1);

            cout << left << " " << 'a' << " " << right;

            return;
        }
    }

    // a, mid, b
    // a, mid, a
    // b, mid, a
    // b, mid, b

    // mid==bxxxx, which meet A≤B and C≤B

    mid = s.substr(1, n - 2);

    cout << s[0] << " " << mid << " " << s[n - 1];
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