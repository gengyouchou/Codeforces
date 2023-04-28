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

        if (n <= 1)
        {
            cout << -1;
        }
        else
        {
            cout << 2;

            for (int i = 1; i < n; ++i)
            {
                cout << 3;
            }
        }

        cout << endl;
    }

    return 0;
}