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

    vector<string> vec(n);

    unordered_set<string> se;

    for (auto &c : vec)
    {
        cin >> c;
        se.insert(c);
    }

    string ans(n, '0');

    for (int pos = 0; pos < n; ++pos)
    {
        string c = vec[pos];
        for (int i = 1; i < c.size(); ++i)
        {
            string left = c.substr(0, i);
            string right = c.substr(i);

            if (se.find(left) != se.end() && se.find(right) != se.end())
            {
                ans[pos] = '1';
                break;
            }
        }
    }

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