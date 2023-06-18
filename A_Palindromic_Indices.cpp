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

    int mid = n / 2;
    int count = 0;

    int left = mid, right = mid;

    while (left >= 0)
    {
        if (s[left] == s[mid])
        {
            --left;
        }
        else
        {
            break;
        }
    }

    while (right < n)
    {
        if (s[right] == s[mid])
        {
            ++right;
        }
        else
        {
            break;
        }
    }

    cout << right - left - 1;
}

// eexee
//
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;

    cin >> t;

    for (int i = 0; i < t; ++i)
    {

        // if (t == 924 && i == 22)
        // {
        //     int n;
        //     cin >> n;

        //     string s;
        //     cin >> s;

        //     cout << s << endl;
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