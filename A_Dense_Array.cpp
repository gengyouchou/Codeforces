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

        int count = 0;

        for (int i = 0; i < n - 1; ++i)
        {
            int l = min(nums[i], nums[i + 1]);
            int r = max(nums[i], nums[i + 1]);

            if ((r + l - 1) / l > 2)
            {
                while (l < r && (r + l - 1) / l > 2)
                {
                    r = (r + 1) / 2;
                    count += 1;
                }
            }
        }

        cout << count;

        cout << endl;
    }

    return 0;
}
