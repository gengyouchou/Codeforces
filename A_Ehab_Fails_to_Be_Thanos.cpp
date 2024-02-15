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
    vector<int> vec(2 * n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    sort(vec.begin(), vec.end());

    long long sum1 = 0, sum2 = 0;

    for (int i = 0; i < n; ++i)
    {
        sum1 += vec[i];
    }

    for (int i = n; i < 2 * n; ++i)
    {
        sum2 += vec[i];
    }

    if (sum1 != sum2)
    {
        for (int &x : vec)
        {
            cout << x
                 << " ";
        }
    }
    else
    {
        cout << -1;
    }
}

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