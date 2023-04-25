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

int solution(vector<int> &nums)
{
    int n = nums.size();

    int len = 1;
    int ans = 1;

    for (int i = 1; i < n; ++i)
    {
        if (nums[i] >= nums[i - 1])
        {
            ++len;
            ans = max(ans, len);
        }
        else
        {
            len = 1;
        }
    }

    return ans;
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

    cout << solution(nums);
    cout << endl;

    return 0;
}