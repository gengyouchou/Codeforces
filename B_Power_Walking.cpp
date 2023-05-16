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

        map<int, int> m;

        for (int &num : nums)
        {
            ++m[num];
        }

        int len = m.size();

        for (int k = 1; k <= n; ++k)
        {
            if (k <= len)
            {
                cout << len << " ";
            }
            else
            {
                cout << len + k - len << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
