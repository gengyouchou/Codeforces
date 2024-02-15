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

#define ab(x) (((x) < 0) ? -(x) : (x))

bool solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    vector<int> vecsort = vec;

    sort(vecsort.begin(), vecsort.end());

    unordered_map<int, bool> m;

    for (int i = 0; i < k; ++i)
    {
        m[vec[i]] = true;
    }

    int count = 0;

    for (int i = 0; i < k; ++i)
    {
        if (!m.count(vecsort[i]))
        {
            ++count;
        }
    }

    cout << count;
    return true;
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

        cout << endl;
    }
}