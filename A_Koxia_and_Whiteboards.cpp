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
        int n = 0, op = 0;

        cin >> n >> op;

        vector<int> nums(n + op, 0);

        for (int i = 0; i < n + op; ++i)
        {
            cin >> nums[i];
        }

        sort(nums.begin(), nums.end() - 1);
        reverse(nums.begin(), nums.end());

        cout << accumulate(nums.begin(), nums.begin() + n, 0ll);

        cout << endl;
    }

    return 0;
}
