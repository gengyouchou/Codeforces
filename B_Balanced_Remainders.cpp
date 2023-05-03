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

        int c0 = 0, c1 = 0, c2 = 0;

        for (int i = 0; i < n; ++i)
        {
            if (nums[i] % 3 == 0)
            {
                ++c0;
            }
            else if (nums[i] % 3 == 1)
            {
                ++c1;
            }
            else
            {
                ++c2;
            }
        }

        int count = 0;

        while (c0 != n / 3 || c1 != n / 3 || c2 != n / 3)
        {

            if (c0 > n / 3)
            {
                --c0;
                ++c1;
            }
            else if (c1 > n / 3)
            {
                --c1;
                ++c2;
            }
            else if (c2 > n / 3)
            {
                --c2;
                ++c0;
            }
            ++count;
        }

        cout << count;

        cout << endl;
    }

    return 0;
}