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

    for (int c = 0; c < t; ++c)
    {

        int n = 0;

        cin >> n;

        if (n == 2)
        {
            cout << -1 << endl;
            continue;
        }

        vector<vector<int>> nums(n, vector<int>(n, -1));

        int count = 2;

        int val = 1;

        while (count > 0)
        {
            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < n; ++j)
                {
                    if (count == 2)
                    {
                        if ((i + j) % 2 == 0 && nums[i][j] == -1)
                        {
                            nums[i][j] = val;
                            ++val;
                        }
                    }
                    else
                    {
                        if ((i + j) % 2 == 1 && nums[i][j] == -1)
                        {
                            nums[i][j] = val;
                            ++val;
                        }
                    }
                }
            }

            --count;
        }

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cout << nums[i][j] << " ";
            }

            cout << endl;
        }

        cout << endl;
    }

    return 0;
}

// 0 1 2 0 [0 1 2] 1 [1 2 3] 2 [2 3 4]