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
    vector<int> vecA(n);
    for (auto &x : vecA)
    {
        cin >> x;
    }

    vector<int> vecB(n);
    for (auto &x : vecB)
    {
        cin >> x;
    }

    int countA1 = 0;
    int diffpos = 0;

    for (int i = 0; i < n; ++i)
    {
        countA1 += vecA[i];
        if (vecA[i] != vecB[i])
        {
            ++diffpos;
        }
    }

    int countB1 = 0;

    for (auto &x : vecB)
    {
        countB1 += x;
    }

    int ans = min(diffpos, ab(countA1 - countB1) + 1);

    cout << ans;
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