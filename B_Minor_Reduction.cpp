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

    int n = s.size();

    // a+b>=10

    bool finded = false;

    for (int i = n - 1; i >= 1; --i)
    {
        int a = s[i] - '0', b = s[i - 1] - '0';

        if (a + b >= 10)
        {
            int c = a + b;

            string t = to_string(c);
            s[i - 1] = t[0];
            s[i] = t[1];

            finded = true;

            break;
        }
    }

    if (finded == true)
    {
        cout << s;
        return;
    }

    int a = s[0] - '0', b = s[1] - '0';

    int c = a + b;

    string t = to_string(c);
    s[1] = t[0];

    s = s.substr(1);

    cout << s;
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