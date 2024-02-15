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

    int n = 0;

    cin >> n;

    vector<int> prices(n, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> prices[i];
    }

    int m = 0;

    cin >> m;

    vector<int> q(m, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> q[i];
    }

    sort(prices.rbegin(), prices.rend());

    long long sum = accumulate(prices.begin(), prices.end(), 0ll);

    for (int i = 0; i < m; ++i)
    {
        cout << sum - prices[q[i] - 1] << endl;
    }

    return 0;
}

// 7 1 3 1 4 10 8

// 1 1 3 4 7 8 10
