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

#define ab(x) (((x) < 0) ? -(x) : (x))

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> sum(n + 1, -1);
    vector<int> ans(n, 0);

    for (int i = 0; i < n; ++i)
    {
        if (s[i] - '0' + 1 == sum[i])
        {
            ans[i] = 0;
        }
        else
        {
            ans[i] = 1;
        }

        sum[i + 1] = ans[i] + s[i] - '0';
    }

    for (int &x : ans)
    {
        cout << x;
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

// 101011
// 111110
// 212121

// 110
// 100

// 111000
// 101100
// 212101
