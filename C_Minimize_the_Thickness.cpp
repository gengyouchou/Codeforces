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
    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    vector<ll> prefix(n + 1, 0);

    for (int i = 0; i < n; ++i)
    {
        prefix[i + 1] = prefix[i] + vec[i];
    }

    int ans = n;

    for (int k = 0; k < n; ++k)
    {

        ll target = prefix[k + 1] - prefix[0];

        // cout << "target: " << target << endl;

        int len = k + 1;

        for (int i = k + 1; i < n;)
        {
            int j = i;

            while (j < n && prefix[j + 1] - prefix[i] < target)
            {
                ++j;
            }

            // cout<<prefix[j + 1] - prefix[i]<<endl;

            if (j < n && prefix[j + 1] - prefix[i] == target)
            {

                len = max(len, j - i + 1);
            }
            else
            {
                len = n;
                break;
            }

            if (j == i)
            {
                ++i;
            }
            else
            {
                i = j + 1;
            }
        }

        ans = min(ans, len);
    }

    cout << ans;
    //<< "end";
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