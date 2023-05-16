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

    int n = 0;

    cin >> n;

    vector<int> nums(n, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    int cur = -1, pre = -1;
    int count = 0, preCount = 0;
    int ans = 0;

    for (int i = 0; i < n; ++i)
    {
        cur = nums[i];

        if (i == 0 || cur == pre)
        {
            ++count;
        }
        else
        {
            // cout << count << " " << preCount << endl;
            ans = max(ans, min(count, preCount));
            preCount = count;
            count = 1;
        }

        pre = cur;
    }

    // cout << count << " " << preCount << endl;

    ans = max(ans, min(count, preCount));

    cout << ans * 2;

    cout << endl;

    return 0;
}
