#include <algorithm>
#include <functional> // std::minus
#include <iostream>
#include <map>
#include <math.h>
#include <numeric> // std::accumulate
#include <set>
#include <stack>
#include <stdio.h>
#include <string.h>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {

        int n = 0;

        cin >> n;

        vector<int> nums(n, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i];
        }

        unordered_map<int, int> m; //{val, last idx}

        int left = 0;

        for (int i = n - 1; i >= 0; --i)
        {
            if (m.count(nums[i]))
            {
                left = i + 1;
                break;
            }
            m[nums[i]] = i;
        }

        cout << left;

        cout << endl;
    }

    return 0;
}
