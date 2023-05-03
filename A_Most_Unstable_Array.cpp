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

    for (int c = 0; c < t; ++c)
    {
        long long n = 0, sum = 0;

        cin >> n >> sum;

        int p = min(n - 1, (long long)2);

        cout << p * sum;

        cout << endl;
    }

    return 0;
}