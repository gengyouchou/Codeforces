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

        int hit, a, b;

        cin >> hit >> a >> b;

        while ((a > 0 && hit / 2 + 10 < hit) || b > 0)
        {
            if (a > 0 && hit / 2 + 10 < hit)
            {
                --a;
                hit = hit / 2 + 10;
            }
            else if (b > 0)
            {
                --b;
                hit = hit - 10;
            }

            if (hit <= 0)
            {
                break;
            }
        }

        if (hit <= 0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }

    return 0;
}