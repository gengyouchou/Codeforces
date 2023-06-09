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

vector<vector<int>> memo(150, vector<int>(150, -1));

int dfs(int x, int y)
{
    if (x == 1 && y == 1)
    {
        return 0;
    }

    if (x <= 0 || y <= 0)
    {
        return 0;
    }

    if (memo[x][y] != -1)
    {
        return memo[x][y];
    }

    return memo[x][y] = 1 + max(dfs(x + 1, y - 2), dfs(x - 2, y + 1));
}

void solve()
{
    int a1, a2;
    cin >> a1 >> a2;

    cout << dfs(a1, a2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    memo = vector<vector<int>>(150, vector<int>(150, -1));

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