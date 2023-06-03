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
    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    int ans = 0;
    // accumulate(vec.begin(), vec.end(), 0);

    for (int len = 1; len <= n; ++len)
    {

        for (int i = 0; i < n - len + 1; ++i)
        {
            vector<int> temp = vec;
            int j = i + len - 1;

            for (int k = i; k <= j; ++k)
            {
                temp[k] = 1 - temp[k];
            }

            int sum = accumulate(temp.begin(), temp.end(), 0);

            ans = max(ans, sum);
        }
    }

    cout << ans;
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