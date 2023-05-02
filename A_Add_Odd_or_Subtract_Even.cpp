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
        int a = 0, b = 0;

        cin >> a >> b;

        if (a < b)
        {
            if ((b - a) % 2 == 0)
            {
                cout << 2;
            }
            else
            {
                cout << 1;
            }
        }
        else if (a > b)
        {
            if ((a - b) % 2 == 0)
            {
                cout << 1;
            }
            else
            {
                cout << 2;
            }
        }
        else
        {
            cout << 0;
        }

        cout << endl;
    }

    return 0;
}