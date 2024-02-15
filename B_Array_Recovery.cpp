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
    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    vector<int> ans;

    for (int i = 0; i < n; ++i)
    {
        int diff = vec[i];

        if (!ans.empty())
        {
            int cur = ans.back();

            if (cur - diff >= 0 && cur + diff != cur - diff)
            {
                cout << -1;
                return;
            }

            ans.push_back(cur + diff);
        }
        else
        {

            ans.push_back(diff);
        }
    }

    for (auto &x : ans)
    {
        cout << x << " ";
    }
}

// non-negative

// 1 0 2 5
//  1 1 3 8
//  1 1 -1 6

// 2 6 3
//  2 8 5
//  2 8 11

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