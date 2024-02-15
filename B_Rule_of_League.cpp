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

        int n, x, y;

        cin >> n >> x >> y;

        // must contain 0
        // must less than n-1
        // must equal to {n-1, 0} or {(n-1)%w==0, 0}

        bool flag = false;

        if ((x > 0 && y > 0) || (x == 0 && y == 0) || (x > 0 && (n - 1) % x != 0) || (y > 0 && (n - 1) % y != 0))
        {
            flag = false;
        }
        else
        {
            flag = true;
        }

        if (x == 0)
        {
            swap(x, y);
        }

        if (flag == true)
        {
            int cur = 1;
            while (n > 1)
            {
                int temp = x;
                while (temp > 0)
                {
                    cout << cur << " ";
                    --n;
                    --temp;
                }
                cur += x + (cur == 1);
            }
        }
        else
        {
            cout << -1;
        }

        cout << endl;
    }

    return 0;
}
