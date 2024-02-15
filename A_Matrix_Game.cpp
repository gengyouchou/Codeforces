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
    int m, n;
    cin >> m >> n;

    vector<bool> r(m, 1), c(n, 1);

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            int cur = 0;

            cin >> cur;

            if (cur == 1)
            {
                r[i] = 0;
                c[j] = 0;
            }
        }
    }

    int countr = accumulate(r.begin(), r.end(), 0);
    int countc = accumulate(c.begin(), c.end(), 0);

    if (min(countr, countc) % 2 == 0)
    {
        cout << "Vivek";
    }
    else
    {
        cout << "Ashish";
    }
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