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

int solution(vector<int> &nums)
{

    // 1. ans=0: count0<=(n+1)/2; 0 x 0
    // 2. ans=1: countX>0; 0 0 0 x 1 1 1 1
    // 3. ans=2:

    int n = nums.size();

    int count0 = 0;
    int count1 = 0;
    int countX = 0;

    for (int &num : nums)
    {
        if (num == 0)
        {
            ++count0;
        }
        else if (num == 1)
        {
            ++count1;
        }
        else
        {
            ++countX;
        }
    }

    if (count0 <= (n + 1) / 2)
    {
        return 0;
    }

    if (countX > 0 || count1 == 0)
    {
        return 1;
    }

    return 2;
}

int main()
{
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {

        int n = 0;

        cin >> n;

        vector<int> nums(n, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i];
        }

        cout << solution(nums);
        cout << endl;
    }

    return 0;
}