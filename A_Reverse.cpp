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

    int cur = 1;
    int idx1 = 0;

    for (int i = 0; i < n; ++i)
    {
        if (vec[i] != cur)
        {
            idx1 = i;
            break;
        }

        ++cur;
    }

    int idx2 = -1;

    for (int i = 0; i < n; ++i)
    {
        if (vec[i] == cur)
        {
            idx2 = i;
        }
    }

    if (idx2 != -1)
    {
        reverse(vec.begin() + idx1, vec.begin() + idx2 + 1);
    }

    for (int &x : vec)
    {
        cout << x << " ";
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