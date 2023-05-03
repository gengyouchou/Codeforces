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
        long long a = 0, b = 0;

        cin >> a >> b;

        if (a < b)
        {
            swap(a, b);
        }

        long long base = a - b;

        if (base == 0)
        {
            cout << 0 << " " << 0;
        }
        else
        {
            cout << base << " " << min(b % base, base - (b % base));
        }

        cout << endl;
    }

    return 0;
}