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
        long long n, k, b, sum;

        cin >> n >> k >> b >> sum;

        long long base = k * b;

        sum -= base;

        if (sum < 0)
        {
            cout << -1 << endl;
            continue;
        }

        vector<long long> ans(n, 0);
        ans[0] = base;

        for (int i = 0; i < n; ++i)
        {
            int cur = min(k - 1, sum);
            ans[i] += cur;
            sum -= cur;
        }

        if (sum > 0)
        {
            cout << -1;
        }
        else
        {
            for (int i = 0; i < n; ++i)
            {
                cout << ans[i] << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
