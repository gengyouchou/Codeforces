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
    vector<vector<int>> vec(n);
    for (auto &x : vec)
    {
        int len = 0;
        cin >> len;

        for (int i = 0; i < len; ++i)
        {
            int cur = 0;
            cin >> cur;

            x.push_back(cur);
        }
    }

    unordered_set<int> se;

    vector<int> ans(n, -1);

    for (int i = n - 1; i >= 0; --i)
    {
        for (auto &x : vec[i])
        {
            if (se.find(x) == se.end())
            {
                ans[i] = x;
                se.insert(x);
            }
        }

        if (ans[i] == -1)
        {
            cout << -1;
            return;
        }
    }

    for (auto &x : ans)
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