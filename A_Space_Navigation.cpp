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

        int y, x;

        cin >> y >> x;

        string s = "";

        cin >> s;

        int hu = 0, hd = 0, wl = 0, wr = 0;

        for (char &c : s)
        {
            if (c == 'R')
            {
                ++wr;
            }
            else if (c == 'L')
            {
                --wl;
            }
            else if (c == 'U')
            {
                ++hu;
            }
            else if (c == 'D')
            {
                --hd;
            }
        }

        if (x >= hd && x <= hu && y >= wl && y <= wr)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }

        cout << endl;
    }

    return 0;
}
