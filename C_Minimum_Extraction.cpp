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
        int n = 0;

        cin >> n;

        vector<int> nums(n, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i];
        }

        sort(nums.begin(), nums.end());

        int cur = 0;
        int ans = INT_MIN;

        for (int i = 0; i < n; ++i)
        {
            nums[i] = nums[i] - cur;
            cur += nums[i];
            ans = max(ans, nums[i]);
        }

        cout << ans;

        cout << endl;
    }

    return 0;
}
