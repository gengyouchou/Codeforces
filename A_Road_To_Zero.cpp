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

        int x, y;
        long long a, b;

        cin >> x >> y;
        cin >> a >> b;
        // Pay a dollars and increase or decrease any of these integers by 1.
        // Pay b dollars and increase or decrease both integers by 1

        if (x < y)
        {
            swap(x, y);
        }
        // if x>y

        // cost=(x-y)*a+y*b or (x+y)*a

        cout << min((x - y) * a + y * b, (x + y) * a);

        cout << endl;
    }

    return 0;
}