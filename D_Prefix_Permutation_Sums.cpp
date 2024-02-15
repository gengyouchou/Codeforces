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

    vector<bool> visited(n + 1, false);
    vector<ll> error;

    vec.insert(vec.begin(), 0);

    for (int i = 0; i + 1 < n; ++i)
    {
        ll diff = vec[i + 1] - vec[i];

        if (diff >= 1 && diff <= n && visited[diff] == false)
        {
            visited[diff] = true;
        }
        else
        {
            error.push_back(diff);
        }
    }

    if (error.size() >= 2)
    {
        return false;
    }

    if (error.empty())
    {
        return true;
    }

    ll sum = 0;

    for (int i = 1; i < n + 1; ++i)
    {
        if (visited[i] == false)
        {
            sum += i;
        }
    }

    return sum == error[0];
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