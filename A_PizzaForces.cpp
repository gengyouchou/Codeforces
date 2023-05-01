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

    // 6 8 10 15 20 25

    for (int c = 0; c < t; ++c)
    {

        long long n = 0;

        cin >> n;

        cout << max(6LL, n + 1) / 2 * 5 << endl;
    }

    return 0;
}