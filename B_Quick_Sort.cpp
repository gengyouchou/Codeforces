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

        int n = 0, k = 0;

        cin >> n >> k;

        vector<int> nums(n, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i];
        }

        int cur = 1;
        int count = 0;

        for (int i = 0; i < n; ++i)
        {
            if (nums[i] == cur)
            {
                ++cur;
                ++count;
            }
        }

        cout << (n - count + k - 1) / k;

        cout << endl;
    }

    return 0;
}
