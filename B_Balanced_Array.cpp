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

        // 2 4 | 1 3+2
        // 2 4 6 | 1 3 5+3
        // 2 4 6 8| 1 3 5 7+4

        if (n % 4 != 0)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 1; i <= n / 2; ++i)
            {
                cout << i * 2 << " ";
            }

            for (int i = 1; i < n - 1; i += 2)
            {
                cout << i << " ";
            }

            cout << n - 1 + n / 2;
        }

        cout << endl;
    }

    return 0;
}