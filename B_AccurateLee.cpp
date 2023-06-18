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

    string s;
    cin >> s;

    int left1 = -1, right0 = -1;

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '0')
        {
            right0 = i;
        }
    }

    for (int i = n - 1; i >= 0; --i)
    {
        if (s[i] == '1')
        {
            left1 = i;
        }
    }

    if (right0 < left1 || left1 == -1 || right0 == -1)
    {
        cout << s;
        return;
    }

    string r = s.substr(right0, n - right0);
    string l = s.substr(0, left1);

    cout << l + r;
}

// 11001101
// 01
// 010000001
// 10

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