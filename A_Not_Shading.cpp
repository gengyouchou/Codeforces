#include <algorithm>
#include <array>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <functional> // std::minus
#include <iostream>
#include <map>
#include <math.h>
#include <numeric> // std::accumulate
#include <queue>
#include <set>
#include <stack>
#include <stdio.h>
#include <string.h>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;

#define mp make_pair
#define pb push_back
#define F first
#define S second
#define ab(x) (((x) < 0) ? -(x) : (x))

bool solve()
{
    int m, n;
    cin >> m >> n;

    int x, y;
    cin >> x >> y;

    vector<vector<char>> mat(m, vector<char>(n, 0));

    bool haveB = false;

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> mat[i][j];

            // cout << mat[i][j] << " ";

            if (mat[i][j] == 'B')
            {
                // cout << "haveB" << endl;
                haveB = true;
            }
        }
    }

    if (haveB == false)
    {
        cout << -1;
        return false;
    }

    if (mat[x - 1][y - 1] == 'B')
    {
        cout << 0;
        return true;
    }

    for (int i = 0; i < m; ++i)
    {
        if (mat[i][y - 1] == 'B')
        {
            cout << '1';
            return true;
        }
    }

    for (int j = 0; j < n; ++j)
    {
        if (mat[x - 1][j] == 'B')
        {
            cout << '1';
            return true;
        }
    }

    cout << '2';

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;

    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        solve();

        cout << endl;
    }

    return 0;
}