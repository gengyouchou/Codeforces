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

        int c1 = 0, c2 = 0;

        cin >> c1 >> c2;

        if (c1 == 0)
        {
            cout << 1;
        }
        else
        {
            cout << c1 + c2 * 2 + 1;
        }

        cout << endl;
    }

    return 0;
}