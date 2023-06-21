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

bool solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
    {
        cin >> x;
    }

    vector<int> b(n);
    for (auto &x : b)
    {
        cin >> x;
    }

    for (int i = 0; i < n; ++i)
    {
        if (a[i] > a[n - 1])
        {
            swap(a[i], b[i]);
        }

        if (b[i] > b[n - 1])
        {
            swap(a[i], b[i]);
        }

        if (a[i] > a[n - 1] || b[i] > b[n - 1])
        {
            return false;
        }
    }

    return true;
}

// l l s s
// s s l l

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;

    cin >> t;

    for (int i = 0; i < t; ++i)
    {

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