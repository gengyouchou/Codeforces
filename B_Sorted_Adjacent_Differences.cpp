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
    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    sort(vec.begin(), vec.end());

    int mid = n / 2;

    int l = mid - 1, r = mid + 1;

    cout << vec[mid] << " ";

    while (l >= 0 && r < n)
    {
        cout << vec[l] << " ";
        --l;

        cout << vec[r] << " ";
        ++r;
    }

    if (l >= 0)
    {
        cout << vec[l];
    }

    if (r < n)
    {
        cout << vec[r];
    }
}

// a, a+1, a+2, a+3, a+4, a+5
// a+3, a+2, a+4, a+1, a+5, a

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