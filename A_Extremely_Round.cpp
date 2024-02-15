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

vector<int> dp(10000000, 0);

void solve()
{
    int n;
    cin >> n;

    cout << dp[n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 1; i < 10000000; ++i)
    {

        int val = i;

        while (val > 0)
        {

            if (val > 10 && val % 10 != 0)
            {
                break;
            }

            val /= 10;
        }

        if (val == 0)
        {
            dp[i] = dp[i - 1] + 1;
        }
        else
        {
            dp[i] = dp[i - 1];
        }
    }

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