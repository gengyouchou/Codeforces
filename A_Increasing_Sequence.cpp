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
#include <unordered_set>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

int main()
{

    int n = 0, k = 0;

    cin >> n >> k;

    vector<int> nums(n, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    int count = 0;

    for (int i = 1; i < n; ++i)
    {
        int diff = nums[i - 1] - nums[i];

        if (diff >= 0)
        {
            int add = (diff + k) / k;
            count += add;
            nums[i] = nums[i] + add * k;
        }
    }

    cout << count;

    cout << endl;

    return 0;
}
