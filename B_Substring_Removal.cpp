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

ll M = 998244353;

// int dp[1001][26][26];

// memset(dp, -1, sizeof(dp));

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    ll l = 1, r = 1;

    for (int i = 1; i < n; ++i)
    {
        if (s[i] == s[i - 1])
        {
            ++l;
        }
        else
        {
            break;
        }
    }

    for (int i = n - 2; i >= 0; --i)
    {
        if (s[i] == s[i + 1])
        {
            ++r;
        }
        else
        {
            break;
        }
    }

    ll ans = 1;

    if (s[0] == s[n - 1])
    {
        ans += (l + r) + (l * r);
    }
    else
    {
        ans += l + r;
    }

    cout << ans % M;
}

// abaa

// l+r

// a
//    a
//   aa

// l*r

// a  aa
// a   a

//" "

// if all characters are same than ans equal to n*(n+1)/2

// aaa

// a
// a
// a
// aa
// aa
// aaa


// 

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