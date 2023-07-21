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

const ll N = 1'000'000'000'000L;

#define ab(x) (((x) < 0) ? -(x) : (x))

ll M = 1e9 + 7;

// int dp[1001][26][26];

// memset(dp, -1, sizeof(dp));

int countout = 0, countin = 0;

void dfs(const int n, const int postive, const int neg, int curpos, int curneg, int pos)
{

    if (pos == n)
    {
        ++countout;

        if (curpos == postive && curneg == neg)
        {
            ++countin;
        }

        return;
    }

    dfs(n, postive, neg, curpos + 1, curneg, pos + 1);
    dfs(n, postive, neg, curpos, curneg + 1, pos + 1);
}

void solve()
{

    string s1, s2;
    cin >> s1 >> s2;

    int n = s1.size();

    int countpos = 0, countneg = 0;
    int curpos = 0, curneg = 0;
    int limit = 0;

    for (int i = 0; i < n; ++i)
    {
        if (s1[i] == '+')
        {
            ++countpos;
        }
        else if (s1[i] == '-')
        {
            ++countneg;
        }

        if (s2[i] == '+')
        {
            ++curpos;
        }
        else if (s2[i] == '-')
        {
            ++curneg;
        }
        else
        {
            ++limit;
        }
    }

    dfs(limit, countpos, countneg, curpos, curneg, 0);

    cout << fixed << setprecision(10) << (countin * 1.0) / countout;
}

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