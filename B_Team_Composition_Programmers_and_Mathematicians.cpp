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

bool tooLess(int m, int p, int mid)
{

    if (p < mid || m < mid)
    {
        return false;
    }
    m = m - mid;

    p = p - mid;

    return m + p >= 2 * mid;
}

int main()
{
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {

        int m = 0, p = 0;

        cin >> m >> p;

        int l = 0, r = m + p;

        while (l < r)
        {
            int mid = r - (r - l) / 2;

            if (tooLess(m, p, mid))
            {
                l = mid;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << l;

        cout << endl;
    }

    return 0;
}
