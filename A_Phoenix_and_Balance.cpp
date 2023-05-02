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

        int n = 0;

        cin >> n;

        int sum = (1 << n);

        for (int i = 1; i <= n / 2 - 1; ++i)
        {
            sum += (1 << i);
        }

        for (int i = n / 2; i < n; ++i)
        {
            sum -= (1 << i);
        }

        cout << sum;
        cout << endl;
    }

    return 0;
}