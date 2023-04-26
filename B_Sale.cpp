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

int main()
{

    int n, m;

    cin >> n >> m;

    vector<int> nums(n, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    int earn = 0;

    for (int i = 0; i < n; ++i)
    {
        if (nums[i] < 0 && m > 0)
        {
            --m;
            earn += -nums[i];
        }
        else
        {
            break;
        }
    }

    cout << earn << endl;

    return 0;
}