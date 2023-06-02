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

    bool flag = false;

    for (int i = 0; i + 1 < n; ++i)
    {
        if (s[i] == 'L' && s[i + 1] == 'R')
        {
            cout << i + 1;
            return;
        }

        if (s[i] != s[i + 1])
        {
            flag = true;
        }
    }

    if (flag == true)
    {
        cout << 0;
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

//  LLRLLLR
