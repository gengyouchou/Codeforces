#include <algorithm>
#include <functional> // std::minus
#include <iostream>
#include <map>
#include <math.h>
#include <numeric> // std::accumulate
#include <set>
#include <stack>
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

        // 1234
        int sum = (1 + n) * n / 2;
        int r = sum % n;

        int begin = 1;

        if (r != 0)
        {
            cout << r + 1 << " ";
            begin = 2;
        }

        for (int i = begin; i <= n; ++i)
        {
            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}
