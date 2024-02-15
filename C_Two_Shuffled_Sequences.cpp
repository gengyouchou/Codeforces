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

    map<int, int> m;

    for (auto &x : vec)
    {
        ++m[x];
    }

    vector<int> nums1, nums2;

    for (auto [val, freq] : m)
    {
        if (freq > 2)
        {
            cout << "NO";
            return;
        }

        nums1.push_back(val);

        if (freq == 2)
        {
            nums2.push_back(val);
        }
    }

    cout << "YES" << endl;

    cout << nums1.size() << endl;

    for (auto &x : nums1)
    {
        cout << x << " ";
    }

    cout << endl;

    cout << nums2.size() << endl;

    reverse(nums2.begin(), nums2.end());

    for (auto &x : nums2)
    {
        cout << x << " ";
    }
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