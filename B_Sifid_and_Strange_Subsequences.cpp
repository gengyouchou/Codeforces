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
    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    sort(vec.begin(), vec.end());

    int mxPos = INT_MIN;

    vector<int> nums;

    for (int i = 0; i < n; ++i)
    {
        // cout << i << endl;
        if (vec[i] <= 0)
        {
            nums.push_back(vec[i]);
        }
        else
        {
            mxPos = vec[i];
            break;
        }
    }

    // cout << mxPos << endl;

    int add = (mxPos != INT_MIN);

    int len = nums.size();

    for (int i = 0; i < len - 1; ++i)
    {
        if (ab(nums[i] - nums[i + 1]) < mxPos)
        {
            add = 0;
            break;
        }
    }

    cout << nums.size() + add;
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