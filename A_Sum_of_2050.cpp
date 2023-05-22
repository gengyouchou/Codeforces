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

        long long n = 0;

        cin >> n;

        if (n % 2050 != 0)
        {
            cout << -1;
        }
        else
        {
            long long m = n / 2050;

            long long count = 0;

            while (m > 0)
            {
                count += m % 10;
                m /= 10;
            }

            cout << count;
        }

        cout << endl;
    }

    return 0;
}
