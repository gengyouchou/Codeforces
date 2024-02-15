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

    int n = 0;

    cin >> n;

    vector<int> nums(n, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    int mx = 0;

    for (int i = 0; i + 1 < n; ++i)
    {
        mx = max(mx, nums[i + 1] - nums[i]);
    }

    int rem = INT_MAX;

    for (int i = 0; i + 2 < n; ++i)
    {
        rem = min(rem, nums[i + 2] - nums[i]);
    }

    cout << max(rem, mx);

    cout << endl;

    return 0;
}
