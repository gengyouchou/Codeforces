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

int main()
{

    int n = 0;

    cin >> n;

    vector<int> nums(n, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    int steps = n / 2;
    int cur = n % 2 == 0 ? 2 : 1;

    int len = n % 2 == 0 ? 2 : 1;

    while (len <= n)
    {

        int left = (n - len) / 2;
        int right = left + len - 1;

        if (steps % 2 != cur % 2)
        {
            swap(nums[left], nums[right]);
        }

        // reverse(nums.begin() + left, nums.begin() + right);

        // for (int i = 0; i < n; ++i)
        // {
        //     cout << nums[i] << " ";
        // }

        // cout << endl;
        len += 2;
        ++cur;
    }

    for (int i = 0; i < n; ++i)
    {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}

// reverses the segment of cubes from i-th to (n - i + 1)-th. He does this while i ≤ n - i + 1.
// Consider the first sample.

// At the begining row was [2, 3, 9, 6, 7, 1, 4].
// After first operation row was [{4, 1, 7, 6, 9, 3, 2}].
// After second operation row was [4, {3, 9, 6, 7, 1}, 2].
// After third operation row was [4, 3, {7, 6, 9}, 1, 2].
// At fourth operation we reverse just middle element, so nothing has changed.

// The final row is [4, 3, 7, 6, 9, 1, 2]. So the answer for this case is row [2, 3, 9, 6, 7, 1, 4].

// 4 3 7 6 9 1 2

// 4 3 7 6 9 1 2

// 4 3 6 7 9 1 2

// 4 3 9 7 6 1 2

// 4 6 7 9 3 1 2

// 4 1 3 9 7 6 2

// 6 7 9 3 1 4 2

// 6 7 9 3 1 4 2

// 8

// 6 1 4 2 5 6 9 2

// Output

// 9 1 5 2 4 6 6 2

// Answer

// 2 1 6 2 5 4 9 6
