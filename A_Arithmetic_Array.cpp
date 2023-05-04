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

        int sum = 0;

        for (int i = 0; i < n; ++i)
        {
            int cur = 0;
            cin >> cur;
            sum += cur;
        }

        if (sum >= n)
        {
            //(sum+x)/n == 1
            // sum+x=n
            // x=n-sum
            int x = sum - n;
            cout << x;
        }
        else
        {
            cout << 1;
        }

        cout << endl;
    }

    return 0;
}