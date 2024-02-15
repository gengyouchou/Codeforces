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

    string s1, s2;

    cin >> s1 >> s2;

    s1.push_back('0');
    s2.push_back('0');

    int count = 0;

    for (int i = 0; i < n; ++i)
    {
        count += (s1[i] == '1') - (s1[i] == '0');

        if ((s1[i] == s2[i]) != (s1[i + 1] == s2[i + 1]) && count != 0)
        {
            return false;
        }
    }

    return true;
}

// 01[110100]00
// 01 23344444

// 01[001011]00
// 01 11223444

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