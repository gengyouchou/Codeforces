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
    vector<int> coins(n);
    for (auto &x : coins)
    {
        cin >> x;
    }

    int coins25 = 0, coins50 = 0;

    for (int &x : coins)
    {
        int change = x - 25;

        while (change > 0)
        {
            if (coins50 > 0 && change >= 50)
            {
                --coins50;
                change -= 50;
            }
            else if (coins25 > 0)
            {
                --coins25;
                change -= 25;
            }
            else
            {
                return false;
            }
        }

        if (x == 25)
        {
            ++coins25;
        }
        else if (x == 50)
        {
            ++coins50;
        }
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // solve();

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
