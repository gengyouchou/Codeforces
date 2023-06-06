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
    int n, r, b;
    cin >> n >> r >> b;

    int cr = r / (b + 1);
    int qr = r % (b + 1);

    while (r > 0 || b > 0)
    {
        for (int i = 0; i < cr; ++i)
        {
            if (r > 0)
            {
                cout << "R";
                --r;
            }
        }

        if (qr > 0)
        {
            cout << "R";
            --qr;
            --r;
        }

        if (b > 0)
        {
            cout << "B";
            --b;
        }
    }
}

// RBRBRBRBRBRBRRRRRRR
// RRBRRBRRBRRBRRBRRBR

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