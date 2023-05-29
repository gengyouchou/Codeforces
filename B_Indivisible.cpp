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
    int n;
    cin >> n;

    if (n > 1 && n % 2 == 1)
    {

        // n*(n+1)/2 is divisible by n

        cout << -1;
        return false;
    }

    vector<int> vec;

    for (int i = 1; i <= n; ++i)
    {
        vec.push_back(i);
    }

    for (int i = 0; i + 1 < n; i += 2)
    {
        swap(vec[i], vec[i + 1]);
    }

    for (int i = 0; i < vec.size(); ++i)
    {
        cout << vec[i] << " ";
    }

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