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

        vector<int> nums(2 * n, 0);

        for (int i = 0; i < 2 * n; ++i)
        {
            cin >> nums[i];
        }

        sort(nums.begin(), nums.end());

        cout << nums[n] - nums[n - 1];

        cout << endl;
    }

    return 0;
}
