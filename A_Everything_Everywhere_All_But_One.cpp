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
    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    ll sum = accumulate(vec.begin(), vec.end(), 0ll);

    for (int i = 0; i < n; ++i)
    {

        ll d = (sum - vec[i]) / (n - 1);
        ll r = (sum - vec[i]) % (n - 1);
        if (r == 0 && d == vec[i])
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