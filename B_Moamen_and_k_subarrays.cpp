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
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    vector<int> sortVec = vec;

    sort(sortVec.begin(), sortVec.end());

    int j = 0;

    int group = 0;

    for (int i = 0; i < n;)
    {

        int idx = lower_bound(sortVec.begin(), sortVec.end(), vec[i]) - sortVec.begin();

        j = i;

        while (j < n && idx < n && vec[j] == sortVec[idx])
        {
            ++j;
            ++idx;
        }

        if (j != i)
        {
            i = j;
        }
        else
        {
            ++i;
        }

        ++group;
    }

    return group <= k;
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