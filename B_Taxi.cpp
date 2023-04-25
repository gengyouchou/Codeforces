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

    // 2 3 4 4 2 1 3 1

    // [1 3] [1 3] [2 2] [4 4]

    // 1 1 2 2 3 3 4 4

    int n = nums.size();
    int cars = 0;
    int count[5];

    memset(count, 0, 5);

    for (int i = 0; i < n; ++i)
    {
        int cur = nums[i];
        // cout << cur << endl;
        count[cur] += 1;
    }

    int total = n;

    while (count[4] > 0 && total > 0)
    {
        --total;
        --count[4];
        ++cars;
    }

    while (count[3] > 0 && count[1] > 0 && total > 0)
    {
        total -= 2;
        --count[3];
        --count[1];
        ++cars;
    }

    while (count[2] > 0 && count[1] > 2 && total > 0)
    {
        --count[2];
        count[1] -= 2;
        total -= 3;
        ++cars;
    }

    while (count[2] > 2 && total > 0)
    {
        count[2] -= 2;
        total -= 2;
        ++cars;
    }

    while (count[1] > 4 && total > 0)
    {
        count[1] -= 4;
        total -= 4;
        ++cars;
    }

    return cars + total;
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

    cout << solution(nums);

    cout << endl;

    return 0;
}