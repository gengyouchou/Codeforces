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

// int dp[1001][26][26];

// memset(dp, -1, sizeof(dp));

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n + 2);
    for (auto &x : vec)
    {
        cin >> x;
    }

    int m = vec.size();

    multiset<ll> mst(vec.begin(), vec.end());

    ll sum = accumulate(vec.begin(), vec.end(), 0ll);

    bool flag = false;

    for (int i = 0; i < m; ++i)
    {
        sum -= vec[i];
        auto iteri = mst.find(vec[i]);
        mst.erase(iteri);

        if (sum % 2 == 0 && mst.find(sum / 2) != mst.end())
        {

            auto iter = mst.find(sum / 2);
            mst.erase(iter);

            for (auto &val : mst)
            {
                cout << val << " ";
            }

            flag = true;

            break;
        }

        sum += vec[i];
        mst.insert(vec[i]);
    }

    if (flag == false)
    {
        cout << -1;
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