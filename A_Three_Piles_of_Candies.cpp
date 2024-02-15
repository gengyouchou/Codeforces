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

    for (int q = 0; q < t; ++q)
    {
        long long a, b, c;

        cin >> a >> b >> c;

        cout << (a + b + c) / 2;

        cout << endl;
    }

    return 0;
}
