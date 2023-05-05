
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

    int n = 0, q = 0;

    cin >> n >> q;

    vector<int> prices(n, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> prices[i];
    }

    sort(prices.rbegin(), prices.rend());

    vector<long long> prefix(n + 1, 0);

    for (int i = 0; i < n; ++i)
    {
        prefix[i + 1] = prefix[i] + prices[i];
    }

    for (int i = 0; i < q; ++i)
    {
        int x, y;

        cin >> x >> y;

        long long sum = prefix[x] - prefix[x - y];

        cout << sum;
        cout << endl;
    }

    return 0;
}