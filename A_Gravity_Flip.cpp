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

vector<int> solution(vector<int> &nums)
{
    sort(nums.begin(), nums.end());

    return nums;
}

int main()
{

    int n = 0;

    cin >> n;

    vector<int> nums(n, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    vector<int> ans = solution(nums);

    for (int i = 0; i < n; ++i)
    {
        cout << ans[i] << " ";
    }

    return 0;
}