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

        vector<vector<int>> nums(n, vector<int>(n - 1, 0));

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n - 1; ++j)
            {
                cin >> nums[i][j];
            }
        }

        int cur = -1;

        unordered_map<int, int> m;

        for (int i = 0; i < n; ++i)
        {
            ++m[nums[i][0]];
        }

        for (auto [val, freq] : m)
        {
            if (freq == n - 1)
            {
                cur = val;
                break;
            }
        }

        cout << cur << " ";

        for (int i = 0; i < n; ++i)
        {
            if (nums[i][0] != cur)
            {
                for (int j = 0; j < n - 1; ++j)
                {
                    cout << nums[i][j] << " ";
                }
            }
        }

        cout << endl;
    }

    return 0;
}
