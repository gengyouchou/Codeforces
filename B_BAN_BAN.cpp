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

        if (n == 1)
        {
            cout << 1 << endl;
            cout << 1 << " " << 2 << endl;
        }
        else
        {
            cout << n - 1 << endl;
            int count = n - 1;

            int j = 5;

            for (int i = 1; i <= 3 * n; ++i)
            {
                if (i % 3 == 2)
                {
                    continue;
                }

                // while (j <= 3 * n && j % 3 != 2)
                // {
                //     ++j;
                // }

                cout << i << " " << j << endl;

                j += 3;

                if (--count == 0)
                {
                    break;
                }
            }
        }

        // // BAN BAN BAN
        //    123 456 789 10 11 12
        //    AAN BBN
        // AAABBNBNNBAN

        // BAN BAN

        // cout << endl;
    }

    return 0;
}