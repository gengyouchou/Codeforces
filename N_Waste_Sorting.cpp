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

bool solve()
{
    int c1, c2, c3;
    cin >> c1 >> c2 >> c3;

    int a1, a2, a3, a4, a5;
    cin >> a1 >> a2 >> a3 >> a4 >> a5;

    if (c1 > 0)
    {
        int r = min(c1, a1);
        c1 -= r;
        a1 -= r;
    }
    if (c2 > 0)
    {
        int r = min(c2, a2);
        c2 -= r;
        a2 -= r;
    }
    if (c3 > 0)
    {
        int r = min(c3, a3);
        c3 -= r;
        a3 -= r;
    }

    // c1 c3 -> a4
    // c2 c3 -> a5

    if (c1 > 0)
    {
        int r = min(c1, a4);
        c1 -= r;
        a4 -= r;
    }

    if (c2 > 0)
    {
        int r = min(c2, a5);
        c2 -= r;
        a5 -= r;
    }

    return c3 >= a4 + a5 && a1 == 0 && a2 == 0 && a3 == 0;
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