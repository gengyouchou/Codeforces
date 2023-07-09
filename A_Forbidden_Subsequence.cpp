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
    string s, t;

    cin >> s >> t;

    set<char> se(s.begin(), s.end());

    sort(s.begin(), s.end());

    if (t == "abc" && se.find('a') != se.end() && se.find('b') != se.end() && se.find('c') != se.end())
    {
        int n = s.size();
        int i = 0, j = n - 1;

        while (i < j)
        {

            while (i < j && s[i] != 'b')
            {
                ++i;
            }

            while (i < j && s[j] != 'c')
            {
                --j;
            }

            swap(s[i], s[j]);

            ++i;
            --j;
        }
    }

    cout << s;
}

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