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
    int x1, y1, z1;
    int x2, y2, z2;

    cin >> x1 >> y1 >> z1;
    cin >> x2 >> y2 >> z2;

    //     0      1     2

    // a b

    // 2 1 = 2
    // 2 0 = 0
    // 2 2 = 0
    // 1 0 = 0
    // 1 1 = 0
    // 1 2 =-2;

    ll cur = min(z1, y2);

    ll sum21 = 0;
    sum21 += cur * 2;
    z1 -= cur;
    y2 -= cur;

    cur = min(y1, x2);

    y1 -= cur;
    x2 -= cur;

    cur = min(y1, y2);

    y1 -= cur;
    y2 -= cur;

    cur = min(y1, z2);

    sum21 += -2 * cur;

    cout << sum21;
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