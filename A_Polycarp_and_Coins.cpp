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

        int n;

        cin >> n;

        int x = n / 3;

        int c1 = x;
        int c2 = x;

        if (n % 3 == 1)
        {
            c1 += 1;
        }
        else if (n % 3 == 2)
        {
            c2 += 1;
        }

        cout << c1 << " " << c2 << endl;
    }

    return 0;
}