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

        int n = 0, k = 0;

        cin >> n >> k;

        vector<vector<int>> cost(n, vector<int>(2, 0));

        for (int i = 0; i < n; ++i)
        {
            cin >> cost[i][0];
        }

        for (int i = 0; i < n; ++i)
        {
            cin >> cost[i][1];
        }

        sort(cost.begin(), cost.end());

        int i = 0;
        while (i < n && k >= cost[i][0])
        {
            k += cost[i][1];
            ++i;
        }

        cout << k;

        cout << endl;
    }

    return 0;
}
