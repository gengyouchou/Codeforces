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

    int k;

    cin >> k;

    if (k == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    vector<int> nums(12, 0);

    for (int i = 0; i < 12; ++i)
    {
        cin >> nums[i];
    }

    sort(nums.rbegin(), nums.rend());

    int sum = 0;

    for (int i = 0; i < 12; ++i)
    {
        sum += nums[i];
        if (sum >= k)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}