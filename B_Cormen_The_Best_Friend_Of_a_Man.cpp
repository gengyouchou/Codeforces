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

    int n = 0, k = 0;

    cin >> n >> k;

    vector<int> nums(n, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    int add = 0;

    for (int i = 0; i < n - 1; ++i)
    {
        int sum = nums[i] + nums[i + 1];
        if (sum < k)
        {
            nums[i + 1] += k - sum;
            add += k - sum;
        }
    }

    cout << add << endl;

    for (int i = 0; i < n; ++i)
    {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}