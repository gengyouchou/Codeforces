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

        int count = n / 2;
        int r = n % 2;

        if (r > 0)
        {
            cout << 7;
        }
        else
        {
            cout << 1;
        }

        for (int i = 1; i < count; ++i)
        {
            cout << 1;
        }

        cout << endl;
    }

    return 0;
}
