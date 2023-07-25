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
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    int start = vec[0], end = vec[n - 1];

    int cnt = 0;

    for (auto &x : vec)
    {
        if (x == start)
        {
            ++cnt;

            if (cnt == k)
            {
                break;
            }
        }
    }

    if (start == end && cnt == k)
    {
        return true;
    }

    int left = 0, right = n - 1;

    int count = 0;

    for (int i = 0; i < n; ++i)
    {
        if (vec[i] == start)
        {
            ++count;

            left = i;
        }

        if (count == k)
        {
            break;
        }
    }

    if (count != k)
    {
        return false;
    }

    count = 0;

    for (int i = n - 1; i > left; --i)
    {
        if (vec[i] == end)
        {
            ++count;

            right = i;
        }

        if (count == k)
        {
            break;
        }
    }

    if (count != k)
    {
        return false;
    }

    return true;
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