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
    int m;
    cin >> m;

    vector<int> a(m);
    for (auto &x : a)
    {
        cin >> x;
    }

    int n;
    cin >> n;

    vector<int> b(n);
    for (auto &x : b)
    {
        cin >> x;
    }

    int mxa = *max_element(a.begin(), a.end());
    int mxb = *max_element(b.begin(), b.end());

    if (mxa > mxb)
    {
        cout << "Alice" << endl
             << "Alice";
    }
    else if (mxa < mxb)
    {
        cout << "Bob" << endl
             << "Bob";
    }
    else
    {
        cout << "Alice" << endl
             << "Bob";
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