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
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    if (n % 2 == 1)
    {
        cout << "Mike";
        return;
    }

    int smallest = 0;

    for (int i = 0; i < n; ++i)
    {
        if (vec[i] < vec[smallest])
        {
            smallest = i;
        }
    }

    if (smallest % 2 == 0)
    {
        cout << "Joe";
    }
    else
    {
        cout << "Mike";
    }
}

// 1 1 1 2
// j m j m

// 1 2 3
// m j m
// j

// 1 2 3 4
// m j m j
// m j m j

// 1 2 3 4
// j m j m
// j m j m

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