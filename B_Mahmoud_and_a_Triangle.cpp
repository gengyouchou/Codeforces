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

void solution(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());

    for (int i = 0; i + 2 < n; ++i)
    {
        if (nums[i] + nums[i + 1] > nums[i + 2])
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
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

    solution(nums);

    return 0;
}