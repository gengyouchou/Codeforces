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

        int n = 0;

        cin >> n;

        vector<int> nums(n, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i];
        }

        int ans = INT_MAX;

        for (int i = 0; i < n; ++i)
        {
            while (nums[i] != i + 1)
            {
                ans = min(ans, abs(i + 1 - nums[i]));
                swap(nums[i], nums[nums[i] - 1]);
                i = nums[i] - 1;
            }
        }

        // for (int i = 0; i < n; ++i)
        // {
        //     cout << nums[i] << " ";
        // }

        // cout << "ans: " << ans;

        cout << (ans == INT_MAX ? 0 : ans);

        cout << endl;
    }

    return 0;
}

// 2 1 4 3
