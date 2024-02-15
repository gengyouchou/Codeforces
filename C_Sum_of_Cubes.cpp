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

unordered_set<ll> se;

void precub()
{
    for (ll i = 1; i * i * i <= N; ++i)
    {
        se.insert(i * i * i);
    }
}

bool solve()
{
    ll x;
    cin >> x;

    for (ll i = 1; i * i * i <= x; ++i)
    {

        ll cur = i * i * i;

        if (se.find(x - cur) != se.end())
        {
            return true;
        }
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;

    cin >> t;

    precub();

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