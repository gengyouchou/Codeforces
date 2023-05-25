#include <algorithm>
#include <functional> // std::minus
#include <iostream>
#include <map>
#include <math.h>
#include <numeric> // std::accumulate
#include <queue>
#include <set>
#include <stack>
#include <stdio.h>
#include <string.h>
#include <string>
#include <unordered_map>
#include <unordered_set>
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

        // 9%2=1

        // 9-1=8
        // 8/4=2
        // 2-1=1

        if (n <= 3)
        {
            cout << n - 1;
        }
        else
        {
            int r = n % 2;
            cout << r + 2;
        }

        cout << endl;
    }

    return 0;
}
