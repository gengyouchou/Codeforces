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

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    unordered_map<int, int> m;

    for (int i = 0; i < n; ++i)
    {
        ++m[vec[i]];
    }

    int mxFreq = 0;

    for (auto [val, freq] : m)
    {
        mxFreq = max(mxFreq, freq);
    }

    int len = m.size();

    int ans = max(min(len, mxFreq - 1), min(len - 1, mxFreq));

    cout << ans;

    // 4 2 4 1 4 3 4
    // 1 1 2 3 3 4 4 4 4
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