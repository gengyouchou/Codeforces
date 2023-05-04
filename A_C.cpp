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
        int a = 0, b = 0, n = 0;

        cin >> a >> b >> n;

        int sum = 0;
        int count = 0;

        while (sum <= n)
        {
            if (a > b)
            {
                swap(a, b);
            }

            a += b;

            sum = a;
            ++count;
        }

        cout << count;

        cout << endl;
    }

    return 0;
}
