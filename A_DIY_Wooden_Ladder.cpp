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

        int n = 0;

        cin >> n;

        vector<int> nums(n, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i];
        }

        if (n <= 2)
        {
            cout << 0 << endl;
            continue;
        }

        sort(nums.rbegin(), nums.rend());

        int mx1 = nums[0];
        int mx2 = nums[1];

        cout << min(mx2 - 1, n - 2);

        cout << endl;
    }

    return 0;
}

// Let's denote a k
// -step ladder as the following structure: exactly k+2
//  wooden planks, of which

// two planks of length at least k+1
//  — the base of the ladder;
// k planks of length at least 1
//  — the steps of the ladder;
