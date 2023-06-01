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
    int x, h, m;

    cin >> x >> h >> m;

    int cur = h * 60 + m;

    for (int i = 0;; ++i)
    {
        int hi = cur / 60, hm = cur % 60;

        if (hi % 10 == 7 || hm % 10 == 7)
        {
            cout << i;
            return;
        }

        int cir = 60 * 24;

        cur = (cur - x + cir) % cir;
    }
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