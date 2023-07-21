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

#include <iomanip> // std::setprecision

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
    long double a, b, c, d;

    cin >> a >> b >> c >> d;

    long double p1 = a / b, p2 = c / d;

    long double temp = 1, ans = 0;

    for (int i = 0; i < 10000; ++i)
    {
        ans += temp * p1;
        temp = temp * (1 - p1) * (1 - p2);
    }

    cout << fixed << setprecision(10) << ans;
}

// The probability of SmallR winning in the first turn is p.
// The probability of winning in the 2nd turn is (1-p)(1-r)p,
// because it involves both missing on the 1st turn and SmallR hitting on the 2nd.
// Similarly, the probability of SmallR winning in the k-th turn is p[(1-p)(1-r)]^(k-1),
// because the first k turns both of them miss and then SmallR hits.

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

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