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

        int op = 0;

        for (int i = n - 2; i >= 0; --i)
        {
            while (nums[i] >= nums[i + 1] && nums[i] != 0)
            {
                nums[i] /= 2;
                ++op;
            }
        }

        for (int i = 1; i < n; ++i)
        {
            if (nums[i] <= nums[i - 1])
            {
                op = -1;
            }
        }

        cout << op;

        cout << endl;
    }

    return 0;
}
