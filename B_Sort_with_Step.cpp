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

        int n = 0, k = 0;

        cin >> n >> k;

        vector<int> nums(n + 1, 0);

        for (int i = 1; i <= n; ++i)
        {
            cin >> nums[i];
        }

        // vector<set<int>> setIdx(k - 1), setVal(k - 1);

        int bad = 0;

        for (int i = 1; i <= n; ++i)
        {
            // int r=nums[i]%k;

            if (nums[i] % k != i % k)
            {
                ++bad;
            }

            // setIdx[r].insert(i);
            // setVal[r].insert(nums[i]);
        }

        if (bad == 0)
        {
            cout << 0;
        }
        else if (bad == 2)
        {
            cout << 1;
        }
        else
        {
            cout << -1;
        }

        cout << endl;
    }

    return 0;
}

// 1 2 3 4 5 6 7 8
// 2 4 5 6 7 8 1 3
// k=2

// 0 {2, 4, 6, 8}, [4, 6, 8, '3']
// 1 {1, 3, 5, 7}, ['2', 5, 7, 1]
// need to swap {2, 3}, ans=1
