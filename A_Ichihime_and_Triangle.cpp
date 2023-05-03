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
#include <unordered_set>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {

        int n = 4;

        vector<int> nums(n, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i];
        }

        for (int i = 0; i + 2 < n; ++i)
        {
            if (nums[i + 1] + nums[i + 2] > nums[i + 2])
            {
                cout << nums[i + 1] << " " << nums[i + 2] << " " << nums[i + 2];
                break;
            }
        }

        cout << endl;
    }

    return 0;
}