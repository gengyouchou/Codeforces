
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

int PrimeBigerOrEqualToX(int x)
{

    for (int i = x;; ++i)
    {
        bool finded = true;
        for (int j = 2; j <= sqrt(i); ++j)
        {
            if (i % j == 0)
            {
                finded = false;
                break;
            }
        }

        if (finded == true)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {

        int diff = 0;

        cin >> diff;

        int a = PrimeBigerOrEqualToX(1 + diff);
        int b = PrimeBigerOrEqualToX(a + diff);

        cout << a * b;

        cout << endl;
    }

    return 0;
}
