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
    string s;
    cin >> s;

    s.insert(s.begin(), '#');
    s.push_back('#');

    int n = s.size();

    for (int i = 1; i < n - 1; ++i)
    {
        if (s[i] == '?')
        {
            if (s[i - 1] != 'a' && s[i + 1] != 'a')
            {
                s[i] = 'a';
            }
            if (s[i - 1] != 'b' && s[i + 1] != 'b')
            {
                s[i] = 'b';
            }
            if (s[i - 1] != 'c' && s[i + 1] != 'c')
            {
                s[i] = 'c';
            }
        }
    }

    for (int i = 1; i < n; ++i)
    {
        if (s[i] == s[i - 1])
        {
            cout << -1;
            return;
        }
    }

    s = string(s.begin() + 1, s.end() - 1);

    cout << s;
}

// a ? b ? c ? c ? c
// a c b a c a c b c
// a???cb
// [ ab]??cb
// a[ba?]cb
// ab[abc]b

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