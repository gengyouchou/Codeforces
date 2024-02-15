#include <algorithm>
#include <functional> // std::minus
#include <iostream>
#include <map>
#include <math.h>
#include <numeric> // std::accumulate
#include <set>
#include <stack>
#include <stdio.h>
#include <string.h>
#include <string>
#include <unordered_map>
#include <vector>

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

    int i = 0, j = n - 1;

    long long sum = 0;

    while (i < j)
    {
        sum += (long long)(nums[i] + nums[j]) * (nums[i] + nums[j]);
        ++i;
        --j;
    }

    cout << sum;

    cout << endl;

    return 0;
}
