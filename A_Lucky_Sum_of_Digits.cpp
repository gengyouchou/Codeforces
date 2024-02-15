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
    int n;
    cin >> n;

    // a * 4 + b * 7 = n;

    int len = (n + 3) / 4;
    int l = INT_MAX, p2 = INT_MAX;

    for (int i = 0; i <= len; ++i)
    {
        for (int j = 0; j <= len; ++j)
        {
            if (i * 4 + j * 7 == n)
            {
                for (int k = 0; k < i; ++k)
                {
                    cout << 4;
                }

                for (int q = 0; q < j; ++q)
                {
                    cout << 7;
                }

                return;
            }
        }
    }

    cout << -1;
    return;
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