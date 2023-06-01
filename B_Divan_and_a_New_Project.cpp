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
    vector<vector<long long>> times(n, vector<long long>(2, 0));

    for (int i = 0; i < n; ++i)
    {
        cin >> times[i][0];
        times[i][1] = i;
    }

    sort(times.rbegin(), times.rend());

    vector<int> ans(n + 1, 0);

    int cur = 1;

    long long sum = 0;

    for (int i = 0; i < n; i += 1)
    {
        ans[times[i][1] + 1] = cur;
        sum += 2 * times[i][0] * ab(cur);

        // cout << times[i][0] << " ";

        if (i % 2 == 0)
        {
            cur = -cur;
        }
        else
        {
            cur = ab(cur);
            cur = cur + 1;
        }
    }

    cout << sum << endl;

    for (int i = 0; i < n + 1; ++i)
    {
        cout << ans[i] << " ";
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