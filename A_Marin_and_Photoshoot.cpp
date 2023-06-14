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

    string s;
    cin >> s;

    int count = 0;

    int j = 0;

    for (int i = 0; i < n;)
    {
        j = i + 1;

        while (j < n && s[j] != '0')
        {
            ++j;
        }

        if (s[i] == '0' && s[j] == '0')
        {
            count += max(0, 2 - (j - i - 1));
        }

        i = j;
    }

    cout << count;
}

// 1010110000100000101
// 10101

// 1010 100
// 010
// 0 11 0 11 0
// 010 101

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