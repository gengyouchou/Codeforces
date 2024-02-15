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
    int n;
    cin >> n;
    vector<ll> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    int negative = 0, zero = 0;
    int mn = INT_MAX;
    ll sum = 0;

    for (int i = 0; i < n; ++i)
    {
        if (vec[i] < 0)
        {
            ++negative;
        }

        if (vec[i] == 0)
        {
            ++zero;
        }

        int val = ab(vec[i]);

        mn = min(mn, val);

        sum += ab(vec[i]);
    }

    if (negative % 2 != 0 && zero == 0)
    {
        sum -= 2 * mn;
    }

    cout << sum;
}

// -mx1  1 -mx2  3
//  mx  -1  mx2  3
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