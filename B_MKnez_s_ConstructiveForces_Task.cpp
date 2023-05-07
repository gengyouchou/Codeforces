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

        int a = 0, b = 0;

        int count = n / 2;
        int r = n % 2;

        if (n < 5 && n % 2 == 0)
        {
            a = 1;
            b = -1;
        }
        else if (n >= 5)
        {

            // (count+r) *a + (count) *b = a + b;

            a = -(count - 1);
            b = count + r - 1;
        }

        if (a == 0 && b == 0)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES" << endl;

            for (int i = 0; i < n / 2; ++i)
            {
                cout << a << " " << b << " ";
            }

            if (r == 1)
            {
                cout << a << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
