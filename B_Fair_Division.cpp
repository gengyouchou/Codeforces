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

    int total = accumulate(nums.begin(), nums.end(), 0);

    if (total % 2 != 0)
    {
        cout << "NO" << endl;
        return;
    }

    int c1 = 0, c2 = 0;
    int p1 = 0;

    for (int &num : nums)
    {
        if (num == 1)
        {
            ++c1;
        }
        else
        {
            ++c2;
        }
    }

    while (c2 > 0 && p1 + 2 < total / 2)
    {
        p1 = p1 + 2;
    }

    while (c1 > 0 && p1 < total / 2)
    {
        p1 = p1 + 1;
    }

    if (p1 == total / 2 || p1 + 2 == total / 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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