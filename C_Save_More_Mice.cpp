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
        int hole = 0, n = 0;

        cin >> hole >> n;

        vector<int> nums(n, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i];
        }

        sort(nums.begin(), nums.end());

        long long cur = 0;
        int eaten = 0;

        for (int i = n - 1; i >= 0; --i)
        {
            if (nums[i] <= cur)
            {
                ++eaten;
            }

            cur += hole - nums[i];
        }

        cout << n - eaten;

        cout << endl;
    }

    return 0;
}
