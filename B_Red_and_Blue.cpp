#include <algorithm>
#include <functional> // std::minus
#include <iostream>
#include <map>
#include <math.h>
#include <numeric> // std::accumulate
#include <set>
#include <stack>
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

        vector<int> red(n, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> red[i];
        }

        int m = 0;

        cin >> m;

        vector<int> blue(m, 0);

        for (int i = 0; i < m; ++i)
        {
            cin >> blue[i];
        }

        int sr = 0;
        int mxsr = 0;

        for (int i = 0; i < n; ++i)
        {
            sr = sr + red[i];
            mxsr = max(mxsr, sr);
        }

        int sb = 0;
        int mxsb = 0;

        for (int i = 0; i < m; ++i)
        {
            sb = sb + blue[i];
            mxsb = max(mxsb, sb);
        }

        cout << mxsb + mxsr;

        cout << endl;
    }

    return 0;
}