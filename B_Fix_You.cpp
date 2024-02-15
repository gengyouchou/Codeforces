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

        int n = 0, m = 0;

        cin >> n >> m;

        vector<vector<char>> nums(n, vector<char>(m, 0));

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> nums[i][j];
            }
        }

        int count = 0;

        for (int i = 0; i < n - 1; ++i)
        {
            if (nums[i][m - 1] != 'D')
            {
                ++count;
            }
        }

        for (int j = 0; j < m - 1; ++j)
        {
            if (nums[n - 1][j] != 'R')
            {
                ++count;
            }
        }

        cout << count;

        cout << endl;
    }

    return 0;
}

// RDDDDDRRd
// RRDDRRDDD
// RRDRDRRDd
// DDDDRDDRd
// DRRDRDDDd
// rrRrRRrrC
