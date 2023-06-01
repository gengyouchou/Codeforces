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

    string sorts = s;

    sort(sorts.begin(), sorts.end());

    vector<int> ans;

    for (int i = 0; i < n; ++i)
    {
        if (sorts[i] != s[i])
        {
            ans.push_back(i + 1);
        }
    }

    if (ans.size() > 0)
    {
        cout << 1 << endl;
        cout << ans.size() << " ";
    }
    else
    {
        cout << 0;
        return;
    }

    for (int i = 0; i < ans.size(); ++i)
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