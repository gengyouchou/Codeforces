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

        // if (c == 53 && t == 10000)
        // {
        //     for (int &num : nums)
        //     {
        //         cout << num << " ";
        //     }

        //     cout << endl;
        // }

        // if (t == 4 || (c == 53 && t == 10000))
        // {
        int mn = *min_element(nums.begin(), nums.end());

        int count = 0;

        for (int i = 0; i < n; ++i)
        {

            if (nums[i] != mn)
            {
                cout << nums[i] << " " << mn << endl;
                ++count;
                if (count >= n / 2)
                {
                    break;
                }
            }
        }
        //}
    }

    return 0;
}
