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
    int m, n;
    cin >> m >> n;

    map<int, int> m1, m2;

    for (int i = 0; i < m; ++i)
    {
        int cur = 0;
        cin >> cur;
        m1[cur] = 1;
    }

    for (int i = 0; i < n; ++i)
    {
        int cur = 0;
        cin >> cur;
        m2[cur] = 1;
    }

    for (auto [val, b] : m1)
    {
        if (m2.count(val))
        {
            cout << val;
            return;
        }
    }

    int a = m1.begin()->first;
    int b = m2.begin()->first;

    if (a > b)
    {
        swap(a, b);
    }

    cout << a << b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();

    cout << endl;
}