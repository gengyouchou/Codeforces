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

long long count(vector<vector<int>> &mat, int i, int j)
{
    int ti = i, tj = j;

    long long ans = 0;

    while (ti >= 0 && tj >= 0)
    {
        ans += mat[ti][tj];
        --ti;
        --tj;
    }

    ti = i;
    tj = j;

    while (ti < mat.size() && tj < mat[0].size())
    {
        ans += mat[ti][tj];
        ++ti;
        ++tj;
    }

    return ans - mat[i][j];
}

int main()
{
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {

        int n = 0, m = 0;

        cin >> n >> m;

        vector<vector<int>> mat(n, vector<int>(m, 0));

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> mat[i][j];
            }
        }

        long long ans = 0;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                ans = max(ans, count(mat, i, j));
            }
        }

        cout << ans;
        cout << endl;
    }

    return 0;
}
