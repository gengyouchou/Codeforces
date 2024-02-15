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

bool solve()
{
    vector<string> vec(4);
    for (auto &x : vec)
    {
        cin >> x;
    }

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            if (j - 1 >= 0 && i - 1 >= 0 && vec[i][j - 1] == vec[i - 1][j] && vec[i - 1][j] == vec[i - 1][j - 1])
            {
                return true;
            }

            if (j - 1 >= 0 && i + 1 < 4 && vec[i][j - 1] == vec[i + 1][j] && vec[i + 1][j] == vec[i + 1][j - 1])
            {
                return true;
            }

            if (j + 1 < 4 && i - 1 >= 0 && vec[i][j + 1] == vec[i - 1][j] && vec[i - 1][j] == vec[i - 1][j + 1])
            {
                return true;
            }

            if (j + 1 < 4 && i + 1 < 4 && vec[i][j + 1] == vec[i + 1][j] && vec[i + 1][j] == vec[i + 1][j + 1])
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

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