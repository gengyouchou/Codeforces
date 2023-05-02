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

    vector<int> pre(n, 1);
    vector<int> cur(n, 1);

    for (int i = 1; i < n; ++i)
    {
        for (int j = 1; j < n; ++j)
        {
            cur[j] = cur[j - 1] + pre[j];
        }

        pre = cur;
    }

    cout << cur[n - 1];

    cout << endl;

    return 0;
}