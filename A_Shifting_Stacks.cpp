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

void solve(vector<long long> &nums)
{

    int n = nums.size();

    long long pre = 0;

    for (int i = 1; i < n; ++i)
    {

        if (nums[i] + nums[i - 1] - pre <= pre)
        {
            cout << "NO";
            return;
        }
        else
        {
            nums[i] += nums[i - 1] - pre;
            nums[i - 1] = pre;

            ++pre;
        }
    }

    cout << "YES";
}

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

        solve(nums);

        cout << endl;
    }

    return 0;
}