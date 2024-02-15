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

        int mx = *max_element(nums.begin(), nums.end());

        long long sum = accumulate(nums.begin(), nums.end(), 0ll);

        cout.precision(16);

        cout << 1.0 * (sum - mx) / (n - 1) + mx;

        cout << endl;
    }

    return 0;
}
