
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

        string ans = "";

        if (n < 2)
        {
            ans = "9";
        }
        else if (n < 3)
        {
            ans = "98";
        }
        else
        {
            ans = "989";
        }

        char cur = '0';

        while (n - 3 > 0)
        {
            ans.insert(ans.end(), cur);
            cur = (cur - '0' + 1) % 10 + '0';
            --n;
        }

        cout << ans;
        cout << endl;
    }

    return 0;
}