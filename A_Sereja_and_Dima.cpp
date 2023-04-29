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

int solve(vector<int> &nums, int l, int r)
{
    if (l > r)
        return 0;
    if (l == r)
        return nums[l];

    if (nums[l] > nums[r])
    {
        return nums[l] - solve(nums, l + 1, r);
    }
    else
    {
        return nums[r] - solve(nums, l, r - 1);
    }
}

int main()
{

    int n = 0;

    cin >> n;

    vector<int> nums(n, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    int a = solve(nums, 0, n - 1);
    int total = accumulate(nums.begin(), nums.end(), 0);

    int se = (total + a) / 2;

    // total=se+di;
    // a=se-di;

    cout << se << " " << total - se;
    cout << endl;

    return 0;
}