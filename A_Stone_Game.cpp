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

using namespace std;

int main()
{

    int t;

    cin >> t;

    while (t--)
    {
        int n = 0;

        cin >> n;

        vector<int> nums(n, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i];
        }

        int mxPos = max_element(nums.begin(), nums.end()) - nums.begin();
        int mnPos = min_element(nums.begin(), nums.end()) - nums.begin();

        int a1 = max(mxPos, mnPos) + 1;
        int a2 = n - min(mxPos, mnPos);
        int a3 = n - (1 + abs(mxPos - mnPos)) + 2;

        int ans = min(a1, min(a2, a3));

        cout << ans << endl;
    }

    return 0;
}