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

    int n = 0;

    cin >> n;

    vector<int> nums(n, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    unordered_map<int, vector<int>> m;

    for (int i = 0; i < n; ++i)
    {
        m[nums[i]].push_back(i);
    }

    if (m.size() < 3)
    {
        cout << 0;
    }
    else
    {

        int l = min(m[1].size(), min(m[2].size(), m[3].size()));

        cout << l << endl;

        int c = 1;

        while (--l >= 0)
        {
            cout << m[1][m[1].size() - c] + 1 << " "
                 << m[2][m[2].size() - c] + 1 << " "
                 << m[3][m[3].size() - c] + 1 << endl;
            ++c;
        }
    }

    cout << endl;

    return 0;
}