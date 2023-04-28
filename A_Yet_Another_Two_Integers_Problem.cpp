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

        int k = 10;

        cout << (diff + k - 1) / k;

        cout << endl;
    }

    return 0;
}