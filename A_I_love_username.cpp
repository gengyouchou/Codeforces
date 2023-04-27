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

    int mn = INT_MAX;
    int mx = INT_MIN;

    int count = 0;

    for (int &num : nums)
    {

        if (num > mx || num < mn)
        {
            ++count;
        }
        mn = min(mn, num);
        mx = max(mx, num);
    }

    cout << count-1 << endl;

    return;
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