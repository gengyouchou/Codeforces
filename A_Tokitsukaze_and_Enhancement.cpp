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

    int op = 0;
    char level = 0;

    if (n % 4 == 1)
    {
        op = 0;
        level = 'A';
    }
    else if (n % 4 == 2)
    {
        op = 1;
        level = 'B';
    }
    else if (n % 4 == 3)
    {
        op = 2;
        level = 'A';
    }
    else if (n % 4 == 0)
    {
        op = 1;
        level = 'A';
    }

    cout << op << " " << level;
}

// 1
// 2 -> +1
// 3 -> +2
// 4 -> +1

// In general, different values of HP are grouped into 4
//  categories:

// Category A
//  if HP is in the form of (4n+1)
// , that is, when divided by 4
// , the remainder is 1
// ;

// Category C
//  if HP is in the form of (4n+2)
// , that is, when divided by 4
// , the remainder is 2
// ;

// Category B
//  if HP is in the form of (4n+3)
// , that is, when divided by 4
// , the remainder is 3
// ;

// Category D
//  if HP is in the form of 4n
// , that is, when divided by 4
// , the remainder is 0
// .

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