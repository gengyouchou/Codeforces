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

bool solve()
{
    vector<int> vec(4);
    for (auto &x : vec)
    {
        cin >> x;
    }

    int sum = accumulate(vec.begin(), vec.end(), 0);

    if (sum % 2 != 0)
    {
        return false;
    }

    vector<bool> dp(sum + 1, false);

    dp[0] = true;

    for (int j = 0; j < 4; ++j)
    {
        for (int i = sum; i >= vec[j]; --i)
        {
            if (dp[i - vec[j]] == true)
            {
                dp[i] = true;
            }
        }
    }

    return dp[sum / 2] == true;
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