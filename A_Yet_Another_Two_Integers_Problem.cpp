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

        int source, target;

        cin >> source >> target;

        int diff = abs(source - target);
        int count = 0;

        for (int k = 10; k >= 1; --k)
        {
            if (diff == 0)
            {
                break;
            }

            if (diff % k >= 0)
            {
                count = count + (diff / k);
                diff = diff % k;
            }
        }

        cout << count;

        cout << endl;
    }

    return 0;
}