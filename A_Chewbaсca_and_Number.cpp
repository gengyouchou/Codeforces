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
    ll n;
    cin >> n;

    vector<int> ans;

    while (n > 0)
    {
        int digit = n % 10;

        if (digit > 4)
        {
            if (digit == 9 && n < 10)
            {
                ans.push_back(digit);
            }
            else
            {
                ans.push_back(9 - digit);
            }
        }
        else
        {
            ans.push_back(digit);
        }

        n /= 10;
    }

    for (int i = ans.size() - 1; i >= 0; --i)
    {
        cout << ans[i];
    }
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