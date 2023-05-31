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
    string s;
    cin >> s;

    int n = s.size();

    for (int len = n; len >= 1; --len)
    {
        for (int i = 0; i < n - len + 1; ++i)
        {
            int j = i + len - 1;

            int left = i, right = j;

            while (left < right)
            {
                if (s[left] != s[right])
                {
                    cout << len;
                    return;
                }
                ++left;
                --right;
            }
        }
    }

    cout << 0;
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