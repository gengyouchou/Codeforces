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
    string x, output;

    cin >> x >> output;

    int n = x.size();

    string ans = "";

    for (int i = 0; i < n; ++i)
    {
        if (x[i] >= output[i])
        {
            ans.insert(ans.end(), output[i]);
        }
        else if (x[i] < output[i])
        {
            cout << -1;
            return;
        }
    }

    for (char &c : ans)
    {
        cout << c;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // int t = 0;

    // cin >> t;

    // for (int i = 0; i < t; ++i)
    // {
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
    //}
}