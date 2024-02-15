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

    long long sumh = 0, sumv = 0;

    sumh = accumulate(nums.begin(), nums.begin() + n / 2, 0ll);
    sumv = accumulate(nums.begin() + n / 2, nums.end(), 0ll);

    cout << sumh * sumh + sumv * sumv;

    cout << endl;

    return 0;
}
