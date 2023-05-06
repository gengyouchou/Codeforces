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
    int days;
    cin >> days;

    int mn = INT_MAX;
    int sum = 0;

    while (days--)
    {
        int count = 0, cost = 0;

        cin >> count >> cost;

        mn = min(mn, cost);
        sum = sum + mn * count;
    }

    cout << sum << endl;

    return 0;
}
