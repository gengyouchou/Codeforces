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

    int n = 0;

    cin >> n;

    vector<int> nums(n, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    int cur = 1;
    int count = 0;

    for (int i = 0; i < n; ++i)
    {
        if (cur <= nums[i])
        {
            ++count;
            ++cur;
        }
    }

    cout << count;

    cout << endl;

    return 0;
}
