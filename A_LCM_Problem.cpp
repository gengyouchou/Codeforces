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
        int left = 0, right = 0;

        cin >> left >> right;

        if (left * 2 > right)
        {
            cout << -1 << " " << -1;
        }
        else
        {
            cout << left << " " << left * 2;
        }

        cout << endl;
    }

    return 0;
}