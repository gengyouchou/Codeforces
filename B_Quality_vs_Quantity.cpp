
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <math.h>
#include <stdio.h>

using namespace std;

bool solution(vector<int> &nums)
{

    sort(nums.begin(), nums.end());

    int n = nums.size();

    int i = 0, j = n - 1;
    long long sumi = nums[0], sumj = nums[j];
    ++i;
    --j;

    int li = 1;
    int lj = 1;

    while (i <= j)
    {
        if (sumi < sumj)
        {
            sumi += nums[i];
            ++i;
            ++li;
        }
        else
        {
            sumj += nums[j];
            --j;
            ++lj;
        }

        //cout << sumi << "," << sumj << endl;

        if (li > lj && sumi < sumj)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int n = 0;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int len = 0;
        cin >> len;

        vector<int> nums(len, 0);

        for (int j = 0; j < len; ++j)
        {
            int cur = 0;
            cin >> cur;
            nums[j] = cur;
        }

        // if (i == 51)
        // {
        //     for (int j = 0; j < len; ++j)
        //     {
        //         cout << nums[j] << ",";
        //     }
        // }

        if (solution(nums) == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}