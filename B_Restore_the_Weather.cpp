#include <algorithm>
#include <functional> // std::minus
#include <iostream>
#include <map>
#include <math.h>
#include <numeric> // std::accumulate
#include <set>
#include <stack>
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

        map<int, vector<int>> m;

        vector<int> nums1(n, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> nums1[i];
            // cout<<nums1[i]<<" ";
            m[nums1[i]].push_back(i);
        }

        vector<int> nums2(n, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> nums2[i];
        }

        sort(nums2.begin(), nums2.end());

        int pos = 0;

        for (auto [val, vec] : m)
        {
            // cout<<nums2[pos]<<" ";

            for (auto idx : vec)
            {
                nums1[idx] = nums2[pos];
                ++pos;
            }
        }

        //cout << "," << endl;

        for (int i = 0; i < n; ++i)
        {
            cout << nums1[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
