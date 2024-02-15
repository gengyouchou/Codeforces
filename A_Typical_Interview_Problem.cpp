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

bool solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    string t = "FBFFBFFB";
    //          FBFFBFFB

    int len = t.size();

    int i = 0;

    while (i < len)
    {

        int j = 0;
        int cur = i;

        while (t[cur % len] == s[j])
        {
            ++j;
            ++cur;

            if (j == n)
            {
                return true;
            }
        }

        ++i;
    }

    return false;
}

// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
//     F   B F     F  B    F        FB        F    B

// FBFFBFFBFB

// BFFBFFBF
// 53353353

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;

    cin >> t;

    for (int i = 0; i < t; ++i)
    {

        if (solve())
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }

        cout << endl;
    }
}