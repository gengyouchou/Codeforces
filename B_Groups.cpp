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
    vector<vector<int>> vec(n, vector<int>(5, 0));
    for (auto &y : vec)
    {
        for (auto &x : y)
        {
            cin >> x;
        }
    }

    for (int j = 0; j < 5; ++j)
    {

        for (int i = j + 1; i < 5; ++i)
        {
            int counti = 0, countj = 0, countij = 0;

            for (int k = 0; k < n; ++k)
            {
                if (vec[k][i] == 1 && vec[k][j] == 1)
                {
                    ++countij;
                }
                else if (vec[k][j] == 1)
                {
                    ++countj;
                }
                else if (vec[k][i] == 1)
                {
                    ++counti;
                }
            }

            if (counti <= n / 2 && countj <= n / 2 && countij + counti + countj == n)
            {
                return true;
            }
        }
    }

    return false;
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
}