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

    int n = 0;

    cin >> n;

    vector<int> pedal(n, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> pedal[i];
    }

    int m = 0;

    cin >> m;

    vector<int> rear(m, 0);

    for (int i = 0; i < m; ++i)
    {
        cin >> rear[i];
    }

    int ans = 0;
    int count = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = m - 1; j >= 0; --j)
        {
            if (rear[j] % pedal[i] == 0)
            {
                // cout << ans << " ";
                int cur = rear[j] / pedal[i];

                if (ans < cur)
                {
                    count = 1;
                    ans = cur;
                }
                else if (ans == cur)
                {
                    ++count;
                }
            }
        }
    }

    cout << count;

    cout << endl;

    return 0;
}
