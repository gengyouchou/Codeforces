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

void solve(vector<int> &nums)
{
    sort(nums.begin(), nums.end());

    int n = nums.size();

    int mn = INT_MAX;
    for (int i = 1; i < n; ++i)
    {
        mn = min(mn, nums[i] - nums[i - 1]);
    }

    cout << mn << endl;
}

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

        solve(nums);
    }

    return 0;
}