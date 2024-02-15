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

#define ab(x) (((x) < 0) ? -(x) : (x))

void solve()
{
    int n, k;
    cin >> n >> k;

    if (k != 1 && n % 2 == 1)
    {
        cout << "NO";
        return;
    }

    cout << "YES" << endl;

    int l = 1,
        r = 2;

    for (int i = 0; i < n; ++i)
    {

        if (i % 2 == 0)
        {
            for (int j = 0; j < k; ++j)
            {
                cout << l << " ";
                l += 2;
            }
        }
        else
        {
            for (int j = 0; j < k; ++j)
            {
                cout << r << " ";
                r += 2;
            }
        }

        cout << endl;
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

// 1  3 5 7 9
// 2  4 6 8 10
// 11