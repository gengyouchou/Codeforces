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

    vector<int> quer(q);

    for (auto &x : quer)
    {
        cin >> x;
    }

    sort(vec.rbegin(), vec.rend());

    vector<ll> prefix(n, 0);

    ll sum = 0;

    for (int i = 0; i < n; ++i)
    {
        sum += vec[i];
        prefix[i] = sum;
    }

    for (auto &x : quer)
    {
        auto idx = lower_bound(prefix.begin(), prefix.end(), x);

        if (idx != prefix.end())
        {
            int count = idx - prefix.begin() + 1;
            cout << count;
        }
        else
        {
            cout << -1;
        }

        cout << endl;
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