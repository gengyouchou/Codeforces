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

        vector<vector<int>> ans(n, vector<int>(n, 0));

        for (int i = 0; i < n; ++i)
        {
            ans[i][i] = 1;
            ans[i][n - i - 1] = 1;
        }

        if (n % 2 == 1)
        {
            ans[n / 2 - 1][n / 2] = 1;
            ans[n / 2][n / 2 + 1] = 1;
        }

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cout << ans[i][j] << " ";
            }

            cout << endl;
        }
        cout << endl;
    }

    return 0;
}

// 1 0 0 1
// 0 1 1 0
// 0 1 1 0
// 1 0 0 1

// 1 0 0 0 1
// 0 1 0 1 0
// 0 0 1 0 0
// 0 1 0 1 0
// 1 0 0 0 1