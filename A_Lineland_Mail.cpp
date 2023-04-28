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
    int n = 0;

    cin >> n;

    vector<int> nums(n, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    for (int i = 0; i < n; ++i)
    {
        int left = (i - 1 < 0 ? INT_MAX : nums[i] - nums[i - 1]);
        int right = (i + 1 >= n ? INT_MAX : nums[i + 1] - nums[i]);
        cout << min(left, right) << endl;
        cout << max(nums[i] - nums[0], nums[n - 1] - nums[i]) << endl;
    }

    return 0;
}