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

    vector<int> vec(n, 0);

    for (int i = 0; i < n; ++i)
    {
        vec[i] = i + 1;
    }

    if (n % 3 == 1)
    {
        swap(vec[0], vec[1]);

        // 2 1 3 4
        // 2 0 3 4
    }

    if (n % 3 == 0)
    {
        swap(vec[0], vec[1]);
        swap(vec[2], vec[3]);
    }

    for (auto &x : vec)
    {
        cout << x << " ";
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