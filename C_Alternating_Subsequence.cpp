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
    int n;
    cin >> n;
    vector<ll> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    vector<ll> postiveBlock, negativeBlock;

    int j = 0;

    for (int i = 0; i < n;)
    {
        j = i;

        ll curMx = -1;
        while (j < n && vec[j] > 0)
        {
            curMx = max(curMx, vec[j]);
            ++j;
        }

        if (i != j)
        {
            postiveBlock.push_back(curMx);
            i = j;
        }
        else
        {
            ++i;
        }
    }

    j = 0;

    for (int i = 0; i < n;)
    {
        j = i;

        ll curMx = INT_MIN;
        while (j < n && vec[j] < 0)
        {
            curMx = max(curMx, vec[j]);
            ++j;
        }

        if (i != j)
        {
            negativeBlock.push_back(curMx);
            i = j;
        }
        else
        {
            ++i;
        }
    }

    ll ans = accumulate(negativeBlock.begin(), negativeBlock.end(), 0ll) + accumulate(postiveBlock.begin(), postiveBlock.end(), 0ll);

    cout << ans;
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