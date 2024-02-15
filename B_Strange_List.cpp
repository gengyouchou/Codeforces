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

ll M = 1e9 + 7;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> vec(n), temp(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> vec[i];
        temp[i] = vec[i];
    }

    ll ans = accumulate(vec.begin(), vec.end(), 0ll);

    for (int i = 0; i < n; i = (i + 1) % n)
    {
        int x = vec[i];

        if (temp[i] % k == 0)
        {
            ans += x;
            temp[i] /= k;
        }
        else
        {
            break;
        }
    }

    cout << ans;
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