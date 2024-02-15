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

bool solve()
{
    int n;
    cin >> n;
    vector<string> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            int count = 0;

            if (i > 0 && vec[i - 1][j] == 'o')
            {
                ++count;
            }

            if (i < n - 1 && vec[i + 1][j] == 'o')
            {
                ++count;
            }

            if (j > 0 && vec[i][j - 1] == 'o')
            {
                ++count;
            }

            if (j < n - 1 && vec[i][j + 1] == 'o')
            {
                ++count;
            }

            if (count % 2 != 0)
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    if (solve())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    cout << endl;
}