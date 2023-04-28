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

        int num;

        cin >> num;

        int val = 0;

        if (num > 45)
        {
            cout << -1 << endl;
            continue;
        }

        for (int i = 9; i >= 1; --i)
        {

            if (num - i <= 0)
            {
                val = val + num;

                string s = to_string(val);
                reverse(s.begin(), s.end());

                cout << s;
                break;
            }
            else
            {
                val += i;
                val *= 10;
                num = num - i;
            }
        }

        cout << endl;
    }

    return 0;
}