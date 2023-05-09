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

        int mn = *min_element(nums.begin(), nums.end());

        int count = 0;
        for (int i = 0; i < n; ++i)
        {
            if (nums[i] == mn)
            {
                ++count;
            }
        }

        cout << n - count;

        cout << endl;
    }

    return 0;
}
