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

        int t = 1;

        while (t << 1 <= n - 1)
        {
            t = t << 1;
        }

        for (int i = 1; i < t; ++i)
        {
            cout << i << " ";
        }

        cout << 0 << " ";

        for (int i = t; i < n; ++i)
        {
            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}
