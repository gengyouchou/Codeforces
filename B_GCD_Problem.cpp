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

        int cur = n - 1;

        if (cur % 2 == 1)
        {
            cout << cur / 2 + 1 << " " << cur / 2 << " " << 1;
        }
        else
        {
            if ((cur / 2) % 2 == 1)
            {
                cout << cur / 2 + 2 << " " << cur / 2 - 2 << " " << 1;
            }
            else
            {
                cout << cur / 2 + 1 << " " << cur / 2 - 1 << " " << 1;
            }
        }

        cout << endl;
    }

    return 0;
}