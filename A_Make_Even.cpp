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

        string s = "";

        cin >> s;

        int n = s.size();

        if ((s[n - 1] - '0') % 2 == 0)
        {
            cout << 1;
        }
        else if ((s[0] - '0') % 2 == 0)
        {
            cout << 0;
        }
        else
        {

            bool flag = false;

            for (int i = n - 1; i >= 0; --i)
            {
                if ((s[i] - '0') % 2 == 0)
                {
                    flag = true;
                }
            }

            if (flag == true)
            {
                cout << 2;
            }
            else
            {
                cout << -1;
            }
        }
        cout << endl;
    }

    return 0;
}
