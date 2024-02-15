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

    int count01 = 0, count10 = 0;

    for (int i = 0; i + 1 < n; ++i)
    {
        if (s[i] == '1' && s[i + 1] == '1')
        {
            ++count10;
        }

        if (s[i] == '0' && s[i + 1] == '0')
        {
            ++count01;
        }
    }
    cout << max(count01, count10);
}

// 1001
// [10]01

// 11101000
// 01234567

// 1[110100]0
//  [0[0101]1]
//    [1010]
// 10101010

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