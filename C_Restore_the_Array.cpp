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

vector<int> solution(vector<int> &nums)
{
    int n = nums.size();

    vector<int> ans(n + 1, 0);

    ans[0] = nums[0];
    ans[n] = nums[n - 1];

    for (int i = 1; i < n; ++i)
    {
        ans[i] = min(nums[i - 1], nums[i]);
    }

    return ans;
}

int main()
{
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {

        int n = 0;

        cin >> n;

        vector<int> nums(n-1, 0);

        for (int i = 0; i < n-1; ++i)
        {
            cin >> nums[i];
        }

        vector<int> ans = solution(nums);

        for (int i = 0; i < ans.size(); ++i)
        {
            cout << ans[i] << " ";
        }

        cout << endl;
    }

    return 0;
}