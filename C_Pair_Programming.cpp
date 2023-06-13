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
    int k, n, m;
    cin >> k >> n >> m;

    vector<int> a(n);
    for (auto &x : a)
    {
        cin >> x;
    }

    vector<int> b(m);

    for (auto &x : b)
    {
        cin >> x;
    }

    vector<int> ans;

    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (a[i] == 0)
        {
            ans.push_back(a[i]);
            ++i;
            ++k;
            continue;
        }

        if (b[j] == 0)
        {
            ans.push_back(b[j]);
            ++j;
            ++k;
            continue;
        }

        if (k >= a[i])
        {
            ans.push_back(a[i]);
            ++i;
            continue;
        }

        if (k >= b[j])
        {
            ans.push_back(b[j]);
            ++j;
            continue;
        }

        cout << -1;
        return;
    }

    while (i < n)
    {
        if (a[i] == 0)
        {
            ans.push_back(a[i]);
            ++i;
            ++k;
            continue;
        }

        if (k >= a[i])
        {
            ans.push_back(a[i]);
            ++i;
            continue;
        }

        cout << -1;
        return;
    }

    while (j < m)
    {
        if (b[j] == 0)
        {
            ans.push_back(b[j]);
            ++j;
            ++k;
            continue;
        }

        if (k >= b[j])
        {
            ans.push_back(b[j]);
            ++j;
            continue;
        }

        cout << -1;
        return;
    }

    for (auto &x : ans)
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