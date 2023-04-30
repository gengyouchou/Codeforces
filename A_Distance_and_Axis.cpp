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
        int a = 0, k = 0;

        cin >> a >> k;

        int diff = 0;

        if (a <= k)
        {
            diff = k - a;
        }
        else
        {
            if ((k + a) % 2 == 0)
            {
                diff = 0;
            }
            else
            {
                diff = 1;
            }
        }

        cout << diff << endl;

        // b-abs(4-b)=0

        // b-(5-b)=8

        // b-(5-b)=1

        // 3-(5-3)

        // 2b-a=k

        // 2b-5=2

        // 0    4  6

        // k=2
    }

    return 0;
}