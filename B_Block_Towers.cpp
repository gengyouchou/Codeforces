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

void solve()
{
    int n;
    cin >> n;
    vector<ll> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    ll sum = 0;

    // 1, 3, 2

    sort(vec.begin() + 1, vec.end());

    for (int i = 0; i < n; ++i)
    {
        ll add = vec[i] - vec[0];

        if (add > 0)
        {
            vec[0] += add / 2 + add % 2;
        }
    }

    cout << vec[0];
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

        // if (t == 10000 && i == 43)
        // {
        //     int n;
        //     cin >> n;
        //     vector<ll> vec(n);
        //     for (auto &x : vec)
        //     {
        //         cin >> x;
        //         cout << x << " ";
        //     }
        // }
        // else
        // {
        solve();
        // }

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