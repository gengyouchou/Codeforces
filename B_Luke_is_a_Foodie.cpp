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
    int n, x;
    cin >> n >> x;
    vector<int> vec(n);
    for (auto &v : vec)
    {
        cin >> v;
    }

    int l = vec[0] - x;
    int r = vec[0] + x;

    int count = 0;

    for (int i = 1; i < n; ++i)
    {
        int templ = vec[i] - x, tempr = vec[i] + x;

        if (tempr < l || templ > r)
        {
            // no intersection

            l = templ;
            r = tempr;

            ++count;
        }
        else
        {
            l = max(l, templ);
            r = min(r, tempr);
        }
    }

    cout << count;
}

// l --------------- r
//      templ-------------------tempr
//---------------v--------------------    

// For ai, if |v−ai|≤x, then ai−x ≤ v ≤ ai+x.

// l 0  5  2  3  4    9   -6

//   3  8  5  6  7    12   -3

// r 6  11 8  9  10   15   0

// v 5  5  5  5  5     9   new

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