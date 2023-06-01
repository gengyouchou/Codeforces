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
    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    sort(vec.begin(), vec.end());

    int j = 0;

    for (int i = 0; i < n;)
    {
        j = i + 1;
        while (j < n && vec[i] == vec[j])
        {
            ++vec[j];
            ++j;
        }

        if (j == i + 1)
        {
            i = j;
        }
        else
        {
            i = j - 1;
        }
    }

    unordered_set<int> se(vec.begin(), vec.end());

    cout << se.size();
    // 12323434

    // 2 4 6 8 9 8 9 10 11

    // 5 9  9  9 10
    // 5 10 10

    // 1 1 3 4 4 5
    // 1 2 3 4 5 6
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

        // if (t == 2400 && i == 75)
        // {

        //     int n;
        //     cin >> n;
        //     vector<int> vec(n);
        //     for (auto &x : vec)
        //     {
        //         cin >> x;
        //     }

        //     for (auto &x : vec)
        //     {
        //         cout << x << " ";
        //     }
        // }
        // else
        // {
        solve();
        // }

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