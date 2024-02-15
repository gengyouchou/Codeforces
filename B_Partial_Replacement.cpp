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
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int left = find(s.begin(), s.end(), '*') - s.begin();
    int right = s.rend() - find(s.rbegin(), s.rend(), '*') - 1;

    if (left == right)
    {
        cout << 1;
        return;
    }

    int count = 0;

    int j = 0;

    for (int i = left; i <= right;)
    {
        j = i + k;

        while (j <= right && j > i && s[j] != '*')
        {
            --j;
        }

        if (j < right)
        {
            ++count;
        }

        if (i == j)
        {
            i = j + 1;
        }
        else
        {
            i = j;
        }
    }

    cout << count + 2;
}

// .**.***
// 0123456
//     i j

// .**.***
// 0123456

// x***x..x
// *****..*
// 01234567
// i  j
//    i   j

// *.*.*
// 01234
//   i j

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