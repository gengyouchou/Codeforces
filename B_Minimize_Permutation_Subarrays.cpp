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

    int idx1 = 0; // min_element(vec.begin(), vec.end()) - vec.begin();
    int idx2 = 0, idxn = 0;

    for (int i = 0; i < n; ++i)
    {

        if (vec[i] == 1)
        {
            idx1 = i + 1;
        }

        if (vec[i] == 2)
        {
            idx2 = i + 1;
        }

        if (vec[i] == n)
        {
            idxn = i + 1;
        }
    }

    if (idx2 > idxn)
    {
        if (idxn == 1)
        {
            cout << idx2 << " " << idxn;
        }
        else
        {
            cout << idx1 << " " << idxn - 1;
        }
    }
    else if (idx2 < idxn)
    {
        if (idxn == n)
        {
            cout << idx2 << " " << idxn;
        }
        else
        {
            cout << idx1 << " " << idxn + 1;
        }
    }

    // 8 5 10 9 2 1 3 4 6 7
    // 1 2  3 4 5 6 7 8 9 10
}

// 2 3 5 7 10 1 8 6 4 9
// 1 2 3 4 5

// 4 5 6 1 2 3
// 1 2 3 4 5 6

// 2 3
// 1 1
// 1 5
// 4 2
// 5 9
// 4 1
// 6 2
// 6 6

// =====
// Used: 0 ms, 0 KB

// =====
// Used: 0 ms, 0 KB

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