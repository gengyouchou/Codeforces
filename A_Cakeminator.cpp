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

    int m = 0, n = 0;

    cin >> m >> n;

    vector<vector<char>> nums(m, vector<char>(n, 0));

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> nums[i][j];
        }
    }

    int rs = 0;

    for (int i = 0; i < m; ++i)
    {

        for (int j = 0; j < n; ++j)
        {
            if (nums[i][j] == 'S')
            {
                ++rs;
                break;
            }
        }
    }

    int cs = 0;

    for (int j = 0; j < n; ++j)
    {
        for (int i = 0; i < m; ++i)
        {
            if (nums[i][j] == 'S')
            {
                ++cs;
                break;
            }
        }
    }

    cout << m * n - rs * cs;

    cout << endl;

    return 0;
}
