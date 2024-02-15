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

        bool flag = true;

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        for (int i = 0; i < n; ++i)
        {

            auto iter = nums2.begin() + i;

            if (iter == nums2.end() || (*iter != nums1[i] && *iter != nums1[i] + 1))
            {
                flag = false;
                break;
            }
        }

        if (flag == true)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }

        cout << endl;
    }

    return 0;
}
