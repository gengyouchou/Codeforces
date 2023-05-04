
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

        int n = 0;

        cin >> n;

        int h2 = 0, h1 = 0, h3 = 0;

        int base = n / 3;

        if (n % 3 == 0)
        {
            h2 = base;
            h1 = base + 1;
            h3 = base - 1;
        }
        else if (n % 3 == 1)
        {
            h2 = base;
            h1 = base + 2;
            h3 = base - 1;
        }
        else
        {
            h2 = base + 1;
            h1 = base + 2;
            h3 = base - 1;
        }

        cout << h2 << " " << h1 << " " << h3;

        cout << endl;
    }

    return 0;
}