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

        int n;
        string s;

        cin >> n >> s;

        int count = 0;
        int ans = 0;

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '(')
            {
                ++count;
            }
            else
            {
                --count;

                if (count < 0)
                {
                    count = 0;
                    ++ans;
                }
            }
        }

        cout << ans;

        cout << endl;
    }

    return 0;
}