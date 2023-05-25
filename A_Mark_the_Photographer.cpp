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
#include <queue>

using namespace std;

bool solution()
{
    int n = 0, x = 0;

    cin >> n >> x;

    vector<int> nums(2 * n, 0);

    for (int i = 0; i < 2 * n; ++i)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    int i = 0, j = n;

    while (j < 2 * n)
    {
        if (nums[j] - nums[i] < x)
        {
            return false;
        }

        ++i;
        ++j;
    }

    return true;
}

int main()
{
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {

        if (solution())
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
