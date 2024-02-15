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

        int ans = 0;

        for (int i = 0; i + 1 < n; ++i)
        {
            ans = max(ans, nums[i] - nums[i + 1]);
        }

        auto mxptr = max_element(nums.begin(), nums.end());
        auto mnptr = min_element(nums.begin(), nums.end());

        cout << max(ans, max(*mxptr - nums[0], nums[n - 1] - *mnptr));

        cout << endl;
    }

    return 0;
}

// 2 1 8 1
// 1 2 1 8