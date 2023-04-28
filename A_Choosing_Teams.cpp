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
    int n = 0, k = 0;

    cin >> n >> k;

    vector<int> nums(n, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());
    int count = 0;

    for (int i = 2; i < n; i += 3)
    {
        if (nums[i] + k <= 5)
        {
            ++count;
        }
    }

    cout << count;

    cout << endl;

    return 0;
}