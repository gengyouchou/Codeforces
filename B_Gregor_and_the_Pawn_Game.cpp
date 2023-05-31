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
    vector<string> vec(2);

    for (int i = 0; i < 2; ++i)
    {
        cin >> vec[i];
    }

    int count = 0;

    for (int i = 0; i < n; ++i)
    {

        if (vec[1][i] == '1')
        {
            if (vec[0][i] == '0')
            {
                ++count;
            }
            else if (i > 0 && vec[0][i - 1] == '1')
            {
                vec[0][i - 1] = '0';
                ++count;
            }
            else if (i < n && vec[0][i + 1] == '1')
            {
                vec[0][i + 1] = '0';
                ++count;
            }
        }
    }

    cout << count;
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