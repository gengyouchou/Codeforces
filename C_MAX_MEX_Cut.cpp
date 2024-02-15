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

int countSame(string &s)
{
    int c = count(s.begin(), s.end(), '0');

    int n = s.size();

    bool have1 = false, have0 = false;

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '1')
        {
            have1 = true;
        }
        else
        {
            have0 = true;
        }

        if (have1 && have0)
        {
            ++c;
            have1 = false;
            have0 = false;
        }
    }

    return c;
}

void solve()
{
    int n;
    cin >> n;
    vector<string> vec(2);
    for (auto &x : vec)
    {
        cin >> x;
    }

    string s = "";
    int ans = 0;

    for (int i = 0; i < n; ++i)
    {
        if (vec[0][i] != vec[1][i])
        {
            ans += 2 + countSame(s);
            s = "";
        }
        else
        {
            s += vec[0][i];
        }
    }

    ans += countSame(s);

    cout << ans;
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