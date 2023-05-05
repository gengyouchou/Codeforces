
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

        int mx = *max_element(nums.begin(), nums.end());
        int mn = *min_element(nums.begin(), nums.end());

        bool needSort = false;

        for (int i = 1; i < n; ++i)
        {
            if (nums[i] < nums[i - 1])
            {
                needSort = true;
            }
        }

        if (mx == nums[0] && mn == nums[n - 1])
        {
            cout << 3 << endl;
        }
        else if (needSort)
        {

            if (mx == nums[n - 1] || mn == nums[0])
            {
                cout << 1;
            }
            else
            {
                cout << 2;
            }
        }
        else
        {
            cout << 0;
        }

        cout << endl;
    }

    return 0;
}