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

bool solve()
{
    int cxl, cxr, cyl, cyr;
    cin >> cxl >> cxr >> cyl >> cyr;

    int x, y, x1, x2, y1, y2;

    cin >> x >> y >> x1 >> y1 >> x2 >> y2;

    if ((x1 == x2 && cxl + cxr > 0) || (y1 == y2 && cyl + cyr > 0) || (cxr - cxl > x2 - x) || (cxl - cxr > x - x1) || (cyl - cyr > y - y1) || (cyr - cyl > y2 - y))
    {
        return false;
    }

    return true;
}

// x1 ≤ u ≤ x2, y1 ≤ v ≤y2

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;

    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        if (solve())
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }

        cout << endl;
    }
}