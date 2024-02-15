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

long long solve(vector<int> &nums, int l, int r)
{

    stack<int> stk;
    int n = nums.size();

    int left = r + 1;
    int right = l;

    for (int i = l; i <= r; ++i)
    {

        while (!stk.empty() && nums[stk.top()] > nums[i])
        {
            left = min(left, stk.top());
            stk.pop();
        }

        stk.push(i);
    }

    stk = stack<int>();

    for (int i = n - 1; i >= 0; --i)
    {
        while (!stk.empty() && nums[stk.top()] < nums[i])
        {
            right = max(right, stk.top());
            stk.pop();
        }

        stk.push(i);
    }

    int len = right - left + 1;

    return len < 0 ? 0 : len;
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

        long long ans = 0;

        for (int i = 0; i < n; ++i)
        {
            for (int j = i; j < n; ++j)
            {
                ans += solve(nums, i, j);
            }
        }

        cout << ans;

        cout << endl;
    }

    return 0;
}
