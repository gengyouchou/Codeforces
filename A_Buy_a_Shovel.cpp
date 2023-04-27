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
    int prices, coins;
    cin >> prices >> coins;

    int i = 1;

    while (prices*i % 10 != 0 && (prices*i - coins) % 10 != 0)
    {
        ++i;
    }

    cout << i << endl;

    return 0;
}
