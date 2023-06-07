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
    string pass, hash;

    cin >> pass >> hash;

    unordered_map<char, int> m, cmp;

    for (auto &c : pass)
    {
        ++m[c];
    }

    int n = hash.size();
    int len = pass.size();

    int i = 0;

    for (int j = 0; j < n; ++j)
    {

        while (i < n && j - i + 1 > len)
        {
            --cmp[hash[i]];
            if (cmp[hash[i]] == 0)
            {
                cmp.erase(hash[i]);
            }
            ++i;
        }

        ++cmp[hash[j]];

        if (m == cmp)
        {
            return true;
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