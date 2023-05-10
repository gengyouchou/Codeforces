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

        int n = 0;

        cin >> n;

        string s = "";

        cin >> s;

        unordered_map<char, int> m;

        vector<int> left(n, 0);

        for (int i = 0; i < n; ++i)
        {
            ++m[s[i]];
            left[i] = m.size();
        }

        m = unordered_map<char, int>();

        vector<int> right(n, 0);

        for (int i = n - 1; i >= 0; --i)
        {
            ++m[s[i]];
            right[i] = m.size();
        }

        int ans = 0;

        for (int i = 0; i + 1 < n; ++i)
        {
            ans = max(ans, left[i] + right[i + 1]);
        }

        cout << ans;
        cout << endl;
    }

    return 0;
}
