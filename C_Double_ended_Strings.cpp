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

    int t = 0;
    cin >> t;

    while (t--)
    {
        string s = "", q = "";

        cin >> s >> q;

        int n = s.size();
        int m = q.size();

        int ans = 0;

        for (int len = 1; len <= min(n, m); ++len)
        {
            for (int i = 0; i + len <= n; ++i)
            {
                for (int j = 0; j + len <= m; ++j)
                {
                    if (s.substr(i, len) == q.substr(j, len))
                    {
                        ans = max(ans, len);
                    }
                }
            }
        }

        cout << n + m - 2 * ans;
        cout << endl;
    }

    return 0;
}
