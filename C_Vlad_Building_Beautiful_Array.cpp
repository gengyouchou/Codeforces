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

        sort(nums.begin(), nums.end());

        bool flag = true;

        if (nums[0] % 2 == 0)
        {
            for (int i = 0; i < n; ++i)
            {
                if (nums[i] % 2 == 1)
                {
                    flag = false;
                }
            }
        }

        if (flag == true)
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
