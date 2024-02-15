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

        int n = 0, a = 0, b = 0;

        cin >> n >> a >> b;

        int mid = n / 2;

        if ((a <= mid && b > mid) || (a == mid + 1 && b == mid))
        {

            cout << a << " ";

            for (int i = mid + 1; i <= n; ++i)
            {
                if (i != b && i != a)
                {
                    cout << i << " ";
                }
            }

            cout << b << " ";

            for (int i = 1; i <= mid; ++i)
            {
                if (i != a && i != b)
                {
                    cout << i << " ";
                }
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
