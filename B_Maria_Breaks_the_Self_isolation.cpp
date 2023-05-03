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

        sort(nums.begin(), nums.end());

        int count = 0;

        for (int i = 0; i < n; ++i)
        {
            if (nums[i] <= i + 1)
            {
                count = i + 1;
            }
        }

        cout << count + 1;
        cout << endl;
    }

    return 0;
}