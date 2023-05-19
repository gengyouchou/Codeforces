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

void dfs(int begin, vector<int> &nums, int &cur)
{

    for (int i = begin; i <= 3; ++i)
    {

        nums[i - 1] = nums[i - 1] - 1;

        if (nums[i - 1] <= 0)
        {
            if (nums[i - 1] == 0)
            {
                ++cur;
            }

            continue;
        }

        dfs(i + 1, nums, cur);
    }
}

int main()
{
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {

        vector<int> nums(3, 0);

        for (int i = 0; i < 3; ++i)
        {
            cin >> nums[i];
        }

        int cur = 0;

        dfs(1, nums, cur);

        cout << cur;

        cout << endl;
    }

    return 0;
}
