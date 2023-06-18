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

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    vector<vector<int>> queries(q, vector<int>(2, 0));

    for (auto &x : queries)
    {
        cin >> x[0] >> x[1];
    }

    map<int, int> mL, mR;

    for (int i = 0; i < n; ++i)
    {
        mR[vec[i]] = i;
    }

    for (int i = n - 1; i >= 0; --i)
    {
        mL[vec[i]] = i;
    }

    for (auto &quer : queries)
    {
        if (mL.count(quer[0]) && mR.count(quer[1]) && mL[quer[0]] <= mR[quer[1]])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
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