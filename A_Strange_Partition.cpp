
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
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {

        int n = 0, x = 0;

        cin >> n >> x;

        vector<int> nums(n, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i];
        }

        long long mn = 0, mx = 0;

        for (int i = 0; i < n; ++i)
        {
            mn += nums[i];
            mx += (nums[i] + x - 1) / x;
        }

        cout << (mn + x - 1) / x << " " << mx;
        cout << endl;
    }

    return 0;
}