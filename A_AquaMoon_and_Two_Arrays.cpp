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

    vector<int> diff(n, 0);

    for (int i = 0; i < n; ++i)
    {
        diff[i] = b[i] - a[i];
    }

    ll sum = accumulate(diff.begin(), diff.end(), 0ll);

    if (sum != 0)
    {
        cout << -1;
        return;
    }

    vector<vector<int>> ans;

    bool flag = true;

    while (flag)
    {
        flag = false;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (i != j && diff[i] < 0 && diff[j] > 0)
                {
                    diff[i] += 1;
                    diff[j] -= 1;

                    ans.push_back({i + 1, j + 1});

                    flag = true;
                }
            }
        }
    }

    cout << ans.size() << endl;

    for (auto &x : ans)
    {

        cout << x[0] << " " << x[1] << endl;
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