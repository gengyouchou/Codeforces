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

        int curMax = nums[n - 1];
        int count = 0;

        for (int i = n - 1; i >= 0; --i)
        {
            if (curMax < nums[i])
            {
                curMax = nums[i];
                ++count;
            }
        }

        cout << count;

        cout << endl;
    }

    return 0;
}

// 5 4 3 2 1

// 1 5 4 3 2

// 1 2 5 4 3

// 1 2 3 5 4
