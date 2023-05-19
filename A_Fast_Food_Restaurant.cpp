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

        vector<int> nums(3, 0);

        for (int i = 0; i < 3; ++i)
        {
            cin >> nums[i];
        }

        int count = 0;

        for (int i = 0; i < 3; ++i)
        {
            if (nums[i] > 0)
            {
                --nums[i];
                ++count;
            }
        }

        sort(nums.rbegin(), nums.rend());

        if (nums[0] > 0 && nums[1] > 0)
        {
            --nums[0];
            --nums[1];
            ++count;
        }

        if (nums[0] > 0 && nums[2] > 0)
        {
            --nums[0];
            --nums[2];
            ++count;
        }
        if (nums[1] > 0 && nums[2] > 0)
        {
            --nums[1];
            --nums[2];
            ++count;
        }
        if (nums[0] > 0 && nums[1] > 0 && nums[2] > 0)
        {
            ++count;
        }

        cout << count << endl;
    }

    return 0;
}

// 3 2 2

// 1 1 1

// 1 1
// 1   1
