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

void solve()
{
    int x;
    cin >> x;

    int xo = 0;
    int an = 1;

    for (int i = 1; i <= INT_MAX; i *= 2)
    {
        if ((i & x) > 0)
        {
            an = i;
            break;
        }
    }

    if (an >= x)
    {
        for (int i = 1; i <= INT_MAX; i *= 2)
        {
            if ((i ^ x) > 0)
            {
                xo = i;
                break;
            }
        }
    }

    int ans = (xo | an);

    cout << ans;
}

//   x = 0001
// and   0001
// xor   0010

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