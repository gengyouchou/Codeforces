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

        int l = 0, r = 0;

        cin >> l >> r;

        int ans = 0;

        if (r / 2 >= l)
        {
            ans = r % (r / 2 + 1);
        }
        else
        {
            ans = r % l;
        }

        cout << ans;
        cout << endl;
    }

    return 0;
}
