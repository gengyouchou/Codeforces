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

        vector<long long> nums(n, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i];
        }

        long long count = 0;

        for (int i = 0; i < n; ++i)
        {
            while (nums[i] % 2 == 0)
            {
                ++count;
                nums[i] /= 2;
            }
        }

        auto mxptr = max_element(nums.begin(), nums.end());

        long long ans = 0;

        while (count--)
        {
            *mxptr = *mxptr * 2;
        }

        for (long long &num : nums)
        {
            ans += num;
        }

        cout << ans;

        cout << endl;
    }

    return 0;
}
