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

// ll dfs(const int k, int idx, ll sum, const int limit)
// {
//     ll count = 0;
//     for (int i = idx; i <= k; ++i)
//     {
//         if (sum + i <= limit)
//         {
//             ++count;
//             count += dfs(k, idx + 1, sum + i, limit);
//         }
//         else
//         {
//             break;
//         }
//     }

//     return count;
// }

void solve()
{
    ll n, k;
    cin >> n >> k;

    // 1, {1 2}
    // 2, {1}
    // 2, {1 2}
    // 10, {1, 2}

    // ll cursum = 1;
    // // ll count = 0;

    // while ((cursum << 1) <= n)
    // {
    //     cursum = cursum << 1;

    //     // count = cur;
    // }

    // int i = 0;
    // ll cur = 1;

    k = min(35ll, k);
    ll limit = 1ll << k;

    // while (cur <= limit)
    // {
    //     if (i <= n)
    //     {
    //         ++count;
    //     }
    //     else
    //     {
    //         break;
    //     }

    //     ++i;
    //     ++cur;
    // }

    // cout << "d: " << (n - cursum) << endl;

    ll ans = min(limit, n + 1);

    cout << ans;
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