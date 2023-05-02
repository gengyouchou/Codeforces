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

        vector<int> nums(n, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i];
        }

        int mx = *max_element(nums.begin(), nums.end());

        int count = 0;
        int ans = -1;

        for (int i = 0; i < n; ++i)
        {
            if ((i > 0 && nums[i] == mx && nums[i - 1] != mx) || (i < n - 1 && nums[i] == mx && nums[i + 1] != mx))
            {
                ans = i;
            }

            if (nums[i] == mx)
            {
                ++count;
            }
        }

        cout << (count == n ? -1 : ans + 1);

        cout << endl;
    }

    return 0;
}