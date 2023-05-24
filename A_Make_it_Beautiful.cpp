#include <algorithm>
#include <functional> // std::minus
#include <iostream>
#include <map>
#include <math.h>
#include <numeric> // std::accumulate
#include <queue>
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

        if (nums[0] != nums[n - 1])
        {
            cout << "YES" << endl;

            cout << nums[n - 1] << " " << nums[0] << " ";
            for (int i = 1; i < n - 1; ++i)
            {
                cout << nums[i] << " ";
            }
        }
        else
        {
            cout << "NO";
        }

        cout << endl;
    }

    return 0;
}

// a a+1 a+3 a+4

// a+4 a a+5
