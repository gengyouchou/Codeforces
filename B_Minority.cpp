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

        string s = "";

        cin >> s;

        int del0 = 0, del1 = 0;
        int ans = 0;

        for (char &c : s)
        {
            if (c == '1')
            {
                ++del0;
            }
            else
            {
                ++del1;
            }

            if (del0 != del1)
            {
                ans = min(del0, del1);
            }
        }

        cout << ans;

        cout << endl;
    }

    return 0;
}
