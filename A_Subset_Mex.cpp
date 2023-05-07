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

        map<int, int> m;

        for (int &num : nums)
        {
            ++m[num];
        }

        int cur = 0;
        int a1 = -1, a2 = -1;

        for (auto [val, freq] : m)
        {
            if (val != cur)
            {
                if (a1 == -1)
                {
                    a1 = cur;
                }
                a2 = cur;

                break;
            }
            else if (freq < 2)
            {
                if (a1 == -1)
                {
                    a1 = cur;
                }
            }

            ++cur;
        }

        if (a2 == -1)
        {
            a2 = cur;
        }

        if (a1 == -1)
        {
            a1 = cur;
        }

        cout << a1 + a2;

        cout << endl;
    }

    return 0;
}

// 0 2 1 5 0 1
// 0 0 1 1 2 5