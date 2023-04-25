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

vector<vector<int>> solution(int n)
{
    vector<vector<int>> nums(2, vector<int>(n, 0));

    // 0 1 2 3 4
    // 1 2 3 4 5

    // 8 2 6 4
    // 1 5 3 7

    int l = 1, r = 2 * n;

    nums[0][0] = r;
    nums[1][n - 1] = r - 1;

    r = r - 2;

    for (int j = 1; j < n; ++j)
    {
        if (j % 2 == 1)
        {
            nums[0][j] = l + 1;
            nums[1][j - 1] = l;
            l = l + 2;
        }
        else
        {
            nums[0][j] = r;
            nums[1][j - 1] = r - 1;
            r = r - 2;
        }
    }

    return nums;
}

int main()
{
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {

        int n = 0;

        cin >> n;

        vector<vector<int>> ans = solution(n);

        for (int i = 0; i < ans.size(); ++i)
        {
            for (int j = 0; j < ans[i].size(); ++j)
            {
                cout << ans[i][j] << " ";
            }

            cout << endl;
        }

        cout << endl;
    }

    return 0;
}
