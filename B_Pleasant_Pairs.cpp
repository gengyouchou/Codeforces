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
    ll n;
    cin >> n;
    vector<ll> vec(n + 1, 0);

    for (int i = 1; i < n + 1; ++i)
    {
        cin >> vec[i];
    }

    ll count = 0;

    for (ll i = 1; i < n + 1; ++i)
    {
        for (ll j = vec[i] - i; j < n + 1; j += vec[i])
        {
            if (j <= i)
            {
                continue;
            }

            if (vec[i] * vec[j] == i + j)
            {
                ++count;
            }
        }

        // j = vec[i] * vec[j] - i
        // vec[j]={1,2,3.....n}
    }

    cout << count;
}

// 3 1 5 9 2
// 1 2 3 4 5

// 3*x=1+y

//(1,2) (1, 5) (2, 3)

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