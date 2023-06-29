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

bool tooLess(const int b, const int r, int mid)
{
    if (mid + 1 > b)
    {
        return false;
    }

    if (mid + 2 > r)
    {
        return false;
    }

    return true;
}

void solve()
{
    int y, b, r;
    cin >> y >> b >> r;

    int left = 0, right = y;

    while (left < right)
    {
        int mid = right - (right - left) / 2;

        if (tooLess(b, r, mid) == true)
        {
            left = mid;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << left + left + 1 + left + 2;
}

// b=y+1
// r=b+1
// y b r
// 1 2 3

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

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