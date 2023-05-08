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

        int ans = INT_MAX;

        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (((s[i] - '0') * 10 + (s[j] - '0')) % 25 == 0)
                {
                    ans = min(ans, (j - i - 1) + (n - j - 1));
                }
            }
        }

        cout << ans;
        cout << endl;
    }

    return 0;
}