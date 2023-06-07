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

vector<string> vec;

void dfs(const int n, int left, int right, string s)
{
    if (vec.size() >= n)
    {
        return;
    }
    
    if (left == 0 && right == 0)
    {

        vec.push_back(s);
    }

    if (left > 0)
    {

        dfs(n, left - 1, right, s + '(');
    }

    if (right > 0 && left < right)
    {

        dfs(n, left, right - 1, s + ')');
    }
}

void solve()
{
    int n;
    cin >> n;

    dfs(n, n, n, "");

    for (auto &s : vec)
    {
        cout << s << endl;
    }
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
        vec = vector<string>();

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