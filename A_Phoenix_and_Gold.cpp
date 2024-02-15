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
    int n, q;
    cin >> n >> q;
    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    if (accumulate(vec.begin(), vec.end(), 0ll) == q)
    {
        cout << "NO";
        return;
    }

    cout << "YES" << endl;

    sort(vec.begin(), vec.end());

    ll sum = 0;

    int skip = -1;

    for (auto &x : vec)
    {
        sum += x;

        if (sum == q)
        {
            sum -= x;
            skip = x;
        }
        else
        {
            cout << x << " ";
        }
    }

    if (skip != -1)
    {
        cout << skip;
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