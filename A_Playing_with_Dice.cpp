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
    int a, b;
    cin >> a >> b;

    int wa = 0, wb = 0, draw = 0;

    for (int i = 1; i <= 6; ++i)
    {
        int ra = ab(a - i);
        int rb = ab(b - i);

        if (ra > rb)
        {
            ++wb;
        }
        else if (rb > ra)
        {
            ++wa;
        }
        else
        {
            ++draw;
        }
    }

    cout << wa << " " << draw << " " << wb;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

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