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

        long long n = 0;

        cin >> n;

        // 4x+6y=n;
        // 2x+3y=n/2;

        if (n % 2 != 0 || n < 4)
        {
            cout << -1;
        }
        else
        {

            long long axles = n / 2;

            cout << (axles + 2) / 3 << " " << axles / 2;
        }

        cout << endl;
    }

    return 0;
}
