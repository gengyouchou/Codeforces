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

void solve(vector<char> &nums)
{
    int n = nums.size();

    unordered_map<char, int> m;

    for (int i = 0; i < n; ++i)
    {
        if (i - 1 >= 0 && nums[i] != nums[i - 1] && m.count(nums[i]))
        {
            cout << "NO" << endl;
            return;
        }

        m[nums[i]] = 1;
    }

    cout << "YES" << endl;
}

int main()
{
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {
        int n = 0;

        cin >> n;

        vector<char> nums(n, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i];
        }

        solve(nums);
    }

    return 0;
}