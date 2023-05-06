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
        int r, g, b, w;

        cin >> r >> g >> b >> w;

        if ((r % 2 == 1) + (g % 2 == 1) + (b % 2 == 1) + (w % 2 == 1) <= 1)
        {
            cout << "YES";
        }
        else if (r > 0 && g > 0 && b > 0)
        {
            --r;
            --g;
            --b;
            w += 3;

            if ((r % 2 == 1) + (g % 2 == 1) + (b % 2 == 1) + (w % 2 == 1) <= 1)
            {
                cout << "YES";
            }
            else
            {
                cout << "NO";
            }
        }
        else
        {
            cout << "NO";
        }

        cout << endl;
    }

    return 0;
}
