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

        vector<int> red(n, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> red[i];
        }

        int m = 0;

        cin >> m;

        vector<int> blue(m, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> blue[i];
        }

        int sr = 0;

        for (int i = 0; i < n; ++i)
        {
            sr = max(sr + red[i], red[i]);
        }

        int sb = 0;

        for (int i = 0; i < m; ++i)
        {
            sb = max(sb + blue[i], blue[i]);
        }

        cout << sb + sr;

        cout << endl;
    }

    return 0;
}