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
    int n, k;
    cin >> n >> k;

    vector<int> vec(n);

    for (auto &x : vec)
    {
        cin >> x;
    }

    ll sum = 0;

    for (int i = 0; i < n; ++i)
    {
        vec[i % k] = max(vec[i], vec[i % k]);
    }

    for (int i = 0; i < k; ++i)
    {
        sum += vec[i % k];
    }

    cout << sum;
}

// k = 3

// 7 0 4 0 4
// 1 2 3 4 5 6

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