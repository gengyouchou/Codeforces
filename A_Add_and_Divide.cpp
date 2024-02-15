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
        long long a = 0, b = 0;

        cin >> a >> b;

        long long ans = INT_MAX;

        for (long long cur = b < 2 ? 2 - b : 0; cur <= 30; ++cur)
        {
            long long count = 0;
            long long bb = b + cur, aa = a;

            while (aa > 0)
            {
                aa = aa / bb;
                ++count;
            }

            ans = min(ans, count + cur);
        }

        cout << ans;

        cout << endl;
    }

    return 0;
}
