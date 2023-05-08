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

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
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

        int mn1 = *min_element(nums1.begin(), nums1.end());
        int mn2 = *min_element(nums2.begin(), nums2.end());

        // 3 5 6
        // 3 2 3

        // 0 2 3

        // 1 0 1
        long long count = 0;

        for (int i = 0; i < n; ++i)
        {

            int diff1 = nums1[i] - mn1;
            int diff2 = nums2[i] - mn2;

            count += max(diff1, diff2);
        }

        cout << count;

        cout << endl;
    }

    return 0;
}