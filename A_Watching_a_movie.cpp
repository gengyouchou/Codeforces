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
    int n, seg;
    cin >> n >> seg;
    vector<vector<int>> vec(n, vector<int>(2, 0));
    for (auto &x : vec)
    {
        cin >> x[0] >> x[1];
    }

    sort(vec.begin(), vec.end());

    ll sum = 0;

    int curMin = 1;

    for (int i = 0; i < n; ++i)
    {
        curMin = vec[i][0] - (vec[i][0] - curMin) % seg;

        sum += vec[i][1] - curMin + 1;

        curMin = vec[i][1] + 1;
    }

    cout << sum;
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