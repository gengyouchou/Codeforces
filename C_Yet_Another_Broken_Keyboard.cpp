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
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    string t(k, 0);

    for (auto &c : t)
    {
        cin >> c;
    }

    unordered_set<char> se(t.begin(), t.end());

    int j = 0;
    ll count = 0;

    for (int i = 0; i < n;)
    {
        j = i;
        while (j < n && se.find(s[j]) != se.end())
        {
            count += j - i + 1;
            ++j;
        }

        if (i == j)
        {
            i = j + 1;
        }
        else
        {
            i = j;
        }
    }

    cout << count;
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