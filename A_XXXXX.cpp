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
    int n, d;
    cin >> n >> d;
    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    ll sum = accumulate(vec.begin(), vec.end(), 0ll);

    if (sum % d != 0)
    {
        cout << n;
        return;
    }

    int left = 0;

    for (int i = 0; i < n; ++i)
    {
        if (vec[i] % d != 0)
        {
            left = i;
            break;
        }
    }

    int right = n;

    for (int i = n - 1; i >= 0; --i)
    {
        if (vec[i] % d != 0)
        {
            right = i;
            break;
        }
    }

    int ans = max(n - left - 1, right);

    if (ans == n)
    {
        ans = -1;
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