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

#define ab(x) (((x) < 0) ? -(x) : (x))

bool solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    vector<long long> prefix(n, 0), suffix(n, 0);

    long long cur = 0;

    for (int i = 0; i < n; ++i)
    {
        cur += (vec[i] == 2);
        prefix[i] = cur;
    }

    cur = 0;

    for (int i = n - 1; i >= 0; --i)
    {
        cur += (vec[i] == 2);
        suffix[i] = cur;
    }

    int ans = -1;

    for (int i = 0; i + 1 < n; ++i)
    {
        if (prefix[i] == suffix[i + 1])
        {
            ans = i + 1;
            break;
        }
    }

    cout << ans;

    return true;
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

        // if (t == 100 && i == 60)
        // {
        //     int n;
        //     cin >> n;
        //     vector<int> vec(n);
        //     for (auto &x : vec)
        //     {
        //         cin >> x;
        //         cout << x << " ";
        //     }

        //     cout << endl;
        // }

        solve();

        cout << endl;
    }
}