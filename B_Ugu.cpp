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

        string s = "";
        cin >> s;

        int count = 0;

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1')
            {
                ++count;

                while (i + 1 < n && s[i + 1] == '1')
                {
                    ++i;
                }
            }
        }

        if (count == 0)
        {
            cout << 0;
        }
        else
        {
            int ans = (count - 1) * 2 + (s[n - 1] == '0');
            cout << ans;
        }
        cout << endl;
    }

    return 0;
}
//                    0123456789
//                  s=0001110010
// Choose i=3, then s=0000001101
// Choose i=6, then s=0000000010
// Choose i=8, then s=0000000001
