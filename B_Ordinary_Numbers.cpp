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

        int n = 0;

        cin >> n;

        // 1,  2, 3, 4, 5, 6, 7, 8, 9
        // 11,22,33,44,55,66,77,88,99

        // d⋅(100 + 101 +…+ 10k)≤n

        int count = 0;

        for (int k = 1; k <= n; k = k * 10 + 1)
        {
            for (int d = 1; d <= 9; ++d)
            {
                if (k * d <= n)
                {
                    ++count;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}