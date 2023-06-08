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
    ll n;
    cin >> n;

    int cnt2 = 0, cnt3 = 0, cnt5 = 0;

    while (n % 2 == 0)
    {
        n /= 2;
        ++cnt2;
    }

    while (n % 3 == 0)
    {
        n /= 3;
        ++cnt3;
    }

    while (n % 5 == 0)
    {
        n /= 5;
        ++cnt5;
    }

    if (n != 1)
    {
        cout << -1;
        return;
    }

    cout << cnt2 + 2 * cnt3 + 3 * cnt5;
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