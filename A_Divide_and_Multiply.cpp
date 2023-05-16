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

        vector<long long> nums(n, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i];
        }

        long long ans = 0;

        for (int pos = 0; pos < n; ++pos)
        {

            vector<long long> temp = nums;
            int i = 0;

            while (i < n)
            {
                if (i != pos && temp[i] % 2 == 0)
                {
                    temp[i] = temp[i] / 2;
                    temp[pos] = temp[pos] * 2;
                }
                else
                {
                    ++i;
                }
            }

            ans = max(ans, accumulate(temp.begin(), temp.end(), 0ll));
        }

        cout << ans;

        cout << endl;
    }

    return 0;
}
