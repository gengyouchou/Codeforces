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

        cout << 2 << endl;

        for (int i = n; i - 1 >= 1; --i)
        {
            cout << i + (i < n) << " " << i - 1 << endl;
        }
    }

    return 0;
}
