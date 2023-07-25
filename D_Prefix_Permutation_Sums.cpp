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

// setprecision example
#include <iomanip> // std::setprecision

using namespace std;

using ll = long long;
using ld = long double;
using ull = unsigned long long;

const ll N = 1'000'000'000'000L;

#define ab(x) (((x) < 0) ? -(x) : (x))

ll M = 1e9 + 7;

// int dp[1001][26][26];

// memset(dp, -1, sizeof(dp));

bool solve()
{
    int n;
    cin >> n;
    vector<ll> vec(n - 1);
    for (auto &x : vec)
    {
        cin >> x;
    }

    ll mn = 1, mx = n;

    multiset<ll> mst;

    mst.insert(vec[0]);

    for (int i = 0; i + 1 < n - 1; ++i)
    {
        int diff = vec[i + 1] - vec[i];

        mst.insert(diff);
    }

    ll mis1 = 0, mis2 = 0, count = 0;

    ll cur = 1;

    auto tempmst = mst;

    for (auto &v : mst)
    {

        while (v != cur)
        {
            // cout << v << " " << cur << endl;
            if (mis1 == 0)
            {
                mis1 = cur;
            }
            else if (mis2 == 0)
            {
                mis2 = cur;
            }
            else
            {
                return false;
            }

            ++cur;

            if (cur > n)
            {
                break;
            }
        }

        // cout << v << " " << cur << endl;

        tempmst.erase(tempmst.find(v));
    }

    cout << mis1 << " " << mis2 << endl;

    return tempmst.find(mis1 + mis2) != tempmst.end();
}

//

// 6 8 12 15

// 6 2 4  3

// 1 2 3 4 5

// 1,5,2,4,3

// [1,6,8,12,15]

// 1 5 2 4 3
// [6,8,12,15]
// or [1, 6, 8, 15]

// 1 5 2 7
// 1 2 5 7
// 3 4

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