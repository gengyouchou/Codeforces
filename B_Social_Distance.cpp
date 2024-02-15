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

bool solve()
{
    long long people = 0, chair = 0;

    cin >> people >> chair;

    vector<int> nums(people, 0);

    for (int i = 0; i < people; ++i)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    for (int i = 1; i < people; ++i)
    {
        --chair;

        if (chair == 0)
        {
            return false;
        }

        chair -= nums[i];
    }

    return chair - nums[people - 1] > 0;
}

int main()
{
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {

        if (solve())
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }

        cout << endl;
    }

    return 0;
}
