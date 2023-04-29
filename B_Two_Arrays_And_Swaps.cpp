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

        int n = 0, k = 0;

        cin >> n >> k;

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

        sort(nums1.begin(), nums1.end());
        sort(nums2.rbegin(), nums2.rend());

        int i = 0, j = 0;

        while (i < n && j < n && k > 0)
        {
            if (nums1[i] < nums2[j])
            {
                swap(nums1[i], nums2[j]);
                ++i;
                ++j;
                --k;
            }
            else
            {
                ++j;
            }
        }

        cout << accumulate(nums1.begin(), nums1.end(), 0);

        cout << endl;
    }

    return 0;
}

// 5 5 6 6 5 1 2 5 4 3

//     5 5 5 6 6

//     6

//     15

//     39

//     11

//     17
