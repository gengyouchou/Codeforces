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
    int n = 0, k = 0;
    cin >> n >> k;

    string s = "";

    cin >> s;

    map<char, int> m;

    for (char &c : s)
    {
        ++m[c];
    }

    int kk = k;

    while (k > 0)
    {
        int step = n / kk;
        char cur = 'a' + step;

        for (int i = 0; i < step; ++i)
        {
            if (m.count('a' + i) && m['a' + i] > 0)
            {
                --m['a' + i];
            }
            else
            {
                cur = 'a' + i;
                break;
            }
        }

        cout << cur;

        --k;
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