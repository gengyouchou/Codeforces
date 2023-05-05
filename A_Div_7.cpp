
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

        int r = n % 7;

        int digit = n % 10;

        if (digit - r < 0)
        {
            cout << n + (7 - r);
        }
        else
        {
            cout << n - r;
        }

        cout << endl;
    }

    return 0;
}