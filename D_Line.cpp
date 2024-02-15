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

    string s;
    cin >> s;

    vector<int> imp;

    // R = n-i-1
    // L = i

    ll total = 0;

    for (int i = 0; i < n; ++i)
    {

        int r = n - i - 1;
        int l = i;
        int diff = 0;

        if (s[i] == 'L')
        {
            total += l;
            diff = r - l;
        }
        else
        {
            total += r;
            diff = l - r;
        }

        if (diff > 0)
        {
            imp.push_back(diff);
        }
    }

    sort(imp.rbegin(), imp.rend());

    int len = imp.size();

    for (int i = 0; i < n; ++i)
    {
        if (i < len)
        {
            total += imp[i];
        }

        cout << total << " ";
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