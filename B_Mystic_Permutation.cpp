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

        if (n <= 1)
        {
            cout << -1 << endl;
            continue;
        }

        vector<bool> visited(n + 1, false);
        vector<int> ans = nums;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                if (j != nums[i] && visited[j] == false)
                {
                    ans[i] = j;
                    visited[j] = true;
                    break;
                }
            }

            if (ans[i] == nums[i])
            {
                swap(ans[i], ans[i - 1]);
            }
        }

        for (int i = 0; i < n; ++i)
        {
            cout << ans[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
