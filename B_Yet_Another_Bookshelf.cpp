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

        int count = 0;

        for (int i = 0; i < n; ++i)
        {
            if (nums[i] == 0)
            {
                ++count;
            }
        }

        for (int i = 0; i < n; ++i)
        {
            if (nums[i] == 1)
            {
                break;
            }
            --count;
        }

        for (int i = n - 1; i >= 0; --i)
        {
            if (nums[i] == 1)
            {
                break;
            }
            --count;
        }

        cout << count;

        cout << endl;
    }

    return 0;
}
