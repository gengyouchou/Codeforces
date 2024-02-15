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
    vector<int> vec(2 * n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    vector<int> odd, even;

    for (int i = 0; i < 2 * n; ++i)
    {
        if (vec[i] % 2 == 0)
        {
            even.push_back(i + 1);
        }
        else
        {
            odd.push_back(i + 1);
        }
    }

    vector<vector<int>> pair;

    for (int i = 0; i + 1 < even.size(); i += 2)
    {
        pair.push_back({even[i], even[i + 1]});
    }

    for (int i = 0; i + 1 < odd.size(); i += 2)
    {
        pair.push_back({odd[i], odd[i + 1]});
    }

    for (int i = 0; i < n - 1; ++i)
    {
        auto p = pair[i];
        cout << p[0] << " " << p[1] << endl;
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