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

        int cur = -1, next = -1;

        for (int j = 0; j < n - 1; ++j)
        {

            unordered_map<int, int> m;

            for (int i = 0; i < n; ++i)
            {
                ++m[nums[i][j]];
            }

            if (next == -1)
            {
                for (auto [val, freq] : m)
                {
                    if (freq == n - 1)
                    {
                        cur = val;
                    }
                    if (freq == 1)
                    {
                        next = val;
                    }
                }
            }
            else
            {

                int tempNext = next;

                for (auto [val, freq] : m)
                {
                    if (tempNext == val)
                    {
                        cur = val;
                    }
                    else
                    {
                        next = val;
                    }
                }
            }

            cout << cur << " ";
        }

        cout << next;

        cout << endl;
    }

    return 0;
}
