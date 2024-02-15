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
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    int count = 0;

    for (int i = 1; i < n; ++i)
    {
        count += vec[i] - vec[i - 1];
    }

    return count <= n + 1;
}

// x 2 x 3   x 1 x

// x 3 x 3 x

// x 2 x 0 x 1 x 1 x 2 x 0

// 0 1 2

// 1 4 5 6 7
//  3 1 1 1
// 2 4 5 6 6

// 1 2 3 7
//  1 1 4
//

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