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
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {

        int n, k;
        cin >> n >> k;

        int ans = 0;

        if (n >= k)
        {
            ans = n % k == 0 ? 1 : 2;
        }
        else
        {
            ans = (k + n - 1) / n;
        }

        cout << ans << endl;
    }

    return 0;
}