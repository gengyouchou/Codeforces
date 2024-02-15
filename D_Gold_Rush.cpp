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

bool dfs(int n, const int k)
{
    if (n == k)
    {
        return true;
    }
    if (n % 3 != 0)
    {
        return false;
    }

    int d = n / 3;

    if (d == k || n - d == k)
    {
        return true;
    }

    return dfs(n - d, k) || dfs(d, k);
}

bool solve()
{
    int n, k;
    cin >> n >> k;

    // 6 -> 2, 4

    // 27 ->  {9, 18} {9, 6, 12} {9, 6, 4, 8} {9, 6, 4, 8}
    // 2

    return dfs(n, k);
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
        // solve();

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