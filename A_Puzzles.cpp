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

int solution(vector<int> &nums, int students)
{

    sort(nums.begin(), nums.end());

    int n = nums.size();

    int ans = INT_MAX;

    for (int j = 0; j < n; ++j)
    {

        if (j - students + 1 >= 0)
        {
            ans = min(ans, nums[j] - nums[j - students + 1]);
        }
    }

    return ans;
}

int main()
{

    int n = 0, students = 0;

    cin >> students >> n;

    vector<int> nums(n, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    cout << solution(nums, students);
    cout << endl;

    return 0;
}