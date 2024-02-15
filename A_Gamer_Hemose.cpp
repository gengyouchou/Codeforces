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
    int n, h;
    cin >> n >> h;
    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    sort(vec.rbegin(), vec.rend());

    int count = 0;

    // (h/2)/mx1
    // (h/2)/mx2;

    ll mx1 = vec[0], mx2 = vec[1];

    int r = h % (mx1 + mx2);

    count = (h / (mx1 + mx2)) * 2 + (r > 0) + (r > mx1);

    cout << count;
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