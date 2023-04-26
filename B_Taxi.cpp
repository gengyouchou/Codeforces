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

    int n = nums.size();
    int cars = 0;
    int count[5] = {0};

    for (int i = 0; i < n; ++i)
    {
        int cur = nums[i];
        count[cur] += 1;
    }

    int m31 = min(count[3], count[1]);
    cars += m31;
    count[3] -= m31;
    count[1] -= m31;

    if (count[2] > 0 && count[1] >= 2)
    {
        int m211 = min(count[2], count[1]/2);
        cars += m211;
        count[2] -= m211;
        count[1] -= m211 * 2;
    }

    int m21 = min(count[2], count[1]);
    cars += m21;
    count[2] -= m21;
    count[1] -= m21;

    cars += count[1] / 4 + (count[1] % 4 != 0) + count[2] / 2 + (count[2] % 2 != 0) + count[3] + count[4];

    return cars;
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