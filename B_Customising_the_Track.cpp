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

        sort(nums.begin(), nums.end());

        int sum = accumulate(nums.begin(), nums.end(), 0);
        int target = sum / n;
        int buff = 0;

        for (int i = 0; i < n; ++i)
        {
            if (nums[i] > target)
            {
                buff += nums[i] - target;
                nums[i] = target;
            }
            else if (nums[i] < target)
            {
                nums[i] -= min(buff, target - nums[i]);
                buff -= min(buff, target - nums[i]);
            }
        }

        
    }

    return 0;
}