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

        deque<int> ans;

        for (int i = 0; i < n; ++i)
        {
            if (ans.empty() || ans[0] < nums[i])
            {
                ans.push_back(nums[i]);
            }
            else if (ans[0] > nums[i])
            {
                ans.push_front(nums[i]);
            }
        }

        for (int i = 0; i < ans.size(); ++i)
        {
            cout << ans[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
