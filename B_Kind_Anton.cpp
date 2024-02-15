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
    vector<int> vec1(n);
    for (auto &x : vec1)
    {
        cin >> x;
    }

    vector<int> vec2(n);
    for (auto &x : vec2)
    {
        cin >> x;
    }

    bool plus = false, minus = false;

    for (int i = 0; i < n; ++i)
    {
        if (vec2[i] - vec1[i] < 0)
        {
            if (minus == false)
            {
                return false;
            }
        }
        else if (vec2[i] - vec1[i] > 0)
        {
            if (plus == false)
            {
                return false;
            }
        }

        if (vec1[i] == 1)
        {
            plus = true;
        }

        if (vec1[i] == -1)
        {
            minus = true;
        }
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