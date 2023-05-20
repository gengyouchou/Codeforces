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

    long long n = 0, boxs = 0;

    cin >> n >> boxs;

    vector<vector<int>> nums(boxs, vector<int>(2, 0));

    for (int i = 0; i < boxs; ++i)
    {
        cin >> nums[i][1];
        cin >> nums[i][0];
    }

    sort(nums.rbegin(), nums.rend());

    long long count = 0;

    for (int i = 0; i < boxs; ++i)
    {
        long long curBox = nums[i][1];

        // cout << nums[i][0] << " ";

        count += min(n, curBox) * nums[i][0];
        n -= curBox;
        if (n <= 0)
        {
            break;
        }
    }

    cout << count;

    cout << endl;

    return 0;
}
