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

        int ptr = 0;

        while (ptr < n && nums[ptr] == 0)
        {
            ++ptr;
        }

        long long count = 0;
        for (int i = ptr; i < n - 1; ++i)
        {
            count += nums[i];
            if (nums[i] == 0)
            {
                ++count;
            }
        }

        cout << count;

        cout << endl;
    }

    return 0;
}
