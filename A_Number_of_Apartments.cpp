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

        int n = 0;

        cin >> n;

        // we can get any n
        //  equal to [3,6,9,…]
        // , [5,8,11,…]
        //  or [7,10,13,…]

        if (n != 1 && n != 2 && n != 4)
        {

            if (n % 3 == 0)
            {
                cout << n / 3 << " " << 0 << " " << 0;
            }
            else if (n % 3 == 2)
            {
                cout << n / 3 - 1 << " " << 1 << " " << 0;
            }
            else
            {
                cout << n / 3 - 2 << " " << 0 << " " << 1;
            }
        }
        else
        {
            cout << -1;
        }

        cout << endl;
    }

    return 0;
}
