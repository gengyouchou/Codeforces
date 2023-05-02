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

        int n = 0, m = 0;

        cin >> m >> n;

        int ans = 0;

        int p2 = m / 2;
        int r2 = m % 2;

        ans += p2 * n;

        if (r2 != 0)
        {
            ans += n / 2 + n % 2;
        }

        cout << ans;

        cout << endl;
    }

    return 0;
}