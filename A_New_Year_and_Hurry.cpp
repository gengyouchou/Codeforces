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
    int nums, minu;
    cin >> nums >> minu;

    int total = 4 * 60 - minu;

    int sol = 0;

    for (int i = 1; i <= nums; ++i)
    {
        total -= 5 * i;

        if (total < 0)
            break;

        ++sol;
    }

    cout << sol;

    return 0;
}