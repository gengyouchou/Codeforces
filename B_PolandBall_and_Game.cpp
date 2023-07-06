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
    int m, n;
    cin >> m >> n;

    vector<string> a(m), b(n);
    for (auto &x : a)
    {
        cin >> x;
    }

    for (auto &x : b)
    {
        cin >> x;
    }

    unordered_set<string> sea, seb;

    for (auto &x : a)
    {
        sea.insert(x);
    }

    for (auto &x : b)
    {
        seb.insert(x);
    }

    int common = 0;

    for (auto &x : sea)
    {
        if (seb.find(x) != seb.end())
        {
            ++common;
        }
    }

    int alen = sea.size(), blen = seb.size();

    if (common % 2 == 0)
    {
        if (alen - common > blen - common)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        if (alen - common > blen - common - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

// 1、common若为偶数，则两人说完共同会的单词后，若n-common>m-common,则A赢。
// 2、common若为奇数，则两人说完共同会的单词后，若n-common>m-common-1,则A赢。

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

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