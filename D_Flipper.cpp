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

        int r = 0;
        for (int i = 0; i < n; ++i)
        {
            if (nums[min(n - 1, r + 1)] <= nums[min(n - 1, i + 1)])
            {
                r = i;
            }
        }

        // cout << "right: " << r << endl;

        vector<int> ans;

        for (int i = r + 1; i < n; ++i)
        {
            ans.emplace_back(nums[i]);
        }

        ans.emplace_back(nums[r]);

        for (int i = r - 1; i >= 0; --i)
        {
            if (nums[i] > nums[0])
            {
                ans.emplace_back(nums[i]);
            }
            else
            {
                for (int k = 0; k <= i; ++k)
                {
                    ans.emplace_back(nums[k]);
                }

                break;
            }
        }

        for (int i = 0; i < n; ++i)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

// 4 1 6 7 2 8 5 L 3 R 9 -1

//  L  9  R| 4 1 6 7 2 8 5 3

// 2 3 1 L 5 R 4 -1
// 2 L 3 1 R 5 4
// R 5 4 |2 3 L 1
