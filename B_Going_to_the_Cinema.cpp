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
    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    map<int, int> m;

    for (auto &x : vec)
    {
        ++m[x];
    }

    int cnt = 0;
    int ans = 0;

    for (int k = 0; k <= n; ++k)
    {
        cnt += m[k];

        if (m[k] == 0 && cnt == k)
        {
            ++ans;
        }
    }

    cout << ans;
}

// 6 0 3 3 6 7 2 7

// 0 2 3 3 6 6 7 7

//           cnt  k
// m[0]=1     1   0
// m[1]=0     1   1
// m[2]=1     2   2
// m[3]=2     4   3
// m[4]=0     4   4
// m[5]=0     4   5
// m[6]=2     6   6
// m[7]=2     8   7
// m[8]=0     8   8

// 0 1 2 3 4 5 6

//           cnt  k
// m[0]=1     1   0
// m[1]=1     2   1
// m[2]=2     3   2
// m[3]=3     4   3
// m[4]=4     5   4
// m[5]=5     6   5
// m[6]=6     7   6
// m[7]=0     7   7

// 1 1

//           cnt  k
// m[0]=0     0   0
// m[1]=2     2   1
// m[2]=0     2   2

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