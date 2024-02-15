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

bool checkOk(vector<int> nums, int mid)
{

    int n = nums.size();
    int count = 0;

    unordered_map<int, int> visited;

    for (int i = 0; i < n; ++i)
    {
        if (count >= mid)
        {
            break;
        }

        if (nums[i] != 0)
        {
            if (visited[nums[i]] == 0)
            {
                visited[nums[i]] = 1;
                ++count;
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        if (visited[nums[i]] == 1)
        {
            nums[i] = 0;
        }
    }

    for (int i = 0; i + 1 < n; ++i)
    {
        if (nums[i] > nums[i + 1])
        {
            return false;
        }
    }

    return true;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    int l = 0, r = n;

    while (l < r)
    {
        int mid = l + (r - l) / 2;

        if (checkOk(vec, mid) == true)
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << l;
}

// 5 6 0 5 6 0 8

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