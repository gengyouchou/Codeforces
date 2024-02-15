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
    int n, k, t;
    cin >> n >> k >> t;
    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    vector<int> temp;

    for (int i = 0; i < n; ++i)
    {
        if (vec[i] <= t)
        {
            temp.push_back(i);
        }
    }

    int count = 1;

    ll ans = 0;

    for (int i = 1; i < temp.size(); ++i)
    {
        // cout<<temp[i]<<" ";
        if (temp[i] == temp[i - 1] + 1)
        {

            ++count;
        }
        else
        {
            // cout<<count<<" ";
            while (count > 0)
            {

                ans += max(0, count - (k - 1));

                --count;
            }

            count = 1;
        }
    }

    // cout<<count<<" ";
    while (count > 0)
    {

        ans += max(0, count - (k - 1));

        --count;
    }

    if (temp.size() == 0)
    {
        ans = 0;
    }

    // cout << endl;

    cout << ans;
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