#include <algorithm>
#include <functional> // std::minus
#include <iostream>
#include <map>
#include <math.h>
#include <numeric> // std::accumulate
#include <set>
#include <stdio.h>
#include <string.h>
#include <string>
#include <unordered_map>
#include <vector>
#include <stack>

using namespace std;

int main()
{

    int n = 0;

    cin >> n;

    vector<int> nums1(n, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> nums1[i];
    }

    vector<int> nums2(n, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> nums2[i];
    }

    int p1 = 0, p2 = 0;

    for (int i = 0; i < n; ++i)
    {
        if (nums1[i] != nums2[i])
        {
            p1 += nums1[i];
            p2 += nums2[i];
        }
    }

    int ans = 0;

    if (p1 == 0)
    {
        ans = -1;
    }
    else
    {
        ans = (p2 + p1) / p1;
    }

    cout << ans;

    cout << endl;

    return 0;
}

// 3 1 1 0 0
// 0 1 1 1 1

// 4 0 0 0 0 0 0 0 4
// 0 1 1 0 1 1 1 1 0
