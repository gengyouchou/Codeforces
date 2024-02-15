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
    int n0, n1;
    cin >> n0 >> n1;

    while (n0 > 0 || n1 > 0)
    {
        if (n0 > 0)
        {
            --n0;
            cout << 0;
        }

        if (n1 > 0)
        {
            --n1;
            cout << 1;
        }
    }

    while (n0 > 0)
    {
        cout << 0;
        --n0;
    }

    while (n1 > 0)
    {
        cout << 1;
        --n1;
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