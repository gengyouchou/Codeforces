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

    s = s + "#";

    int n = s.size();

    vector<int> m(26, 0);

    int count = 0;

    for (int i = 0; i < n; ++i)
    {
        if (i != 0 && s[i] != s[i - 1] && count % 2 == 1)
        {
            m[s[i - 1] - 'a'] = 1;
            count = 1;
        }
        else
        {
            ++count;
        }
    }

    for (int i = 0; i < 26; ++i)
    {
        if (m[i] == 1)
        {
            char c = 'a' + i;
            cout << c;
        }
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