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
    ll n, k;
    cin >> n >> k;

    ll cur = 1;

    while (k - cur > 0)
    {

        k -= cur;

        ++cur;
    }

    string s(n, 'a');

    s[n - cur - 1] = 'b';
    s[n - k] = 'b';

    cout << s;
}

//       b2 b1 k   i   n − i - 1

// aaabb 2 1   1   0  9
// aabab 3 1   2   1  8
// aabba 3 2   3   2  7
// abaab 4 1   4   3  6
// ababa 4 2   5   4  5
// abbaa 4 3   6   5  4
// baaab 5 1   7   6  3
// baaba 5 2   8   7  2
// babaa 5 3   9   8  1
// bbaaa 5 4   10  9  0

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