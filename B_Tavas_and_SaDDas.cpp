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

vector<int> vec;

void dfs(ll digit, ll sum)
{
    vec.push_back(sum);

    if (digit > 9)
    {
        return;
    }

    dfs(digit + 1, sum * 10 + 4);
    dfs(digit + 1, sum * 10 + 7);
}

void solve()
{
    ll n;
    cin >> n;

    dfs(1, 0);

    sort(vec.begin(), vec.end());

    auto iter = lower_bound(vec.begin(), vec.end(), n);

    cout << iter - vec.begin();
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