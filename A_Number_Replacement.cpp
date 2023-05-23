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

        vector<int> nums(n, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i];
        }

        string s = "";

        cin >> s;

        map<int, int> m1, m2;

        for (int i = 0; i < n; ++i)
        {
            ++m1[nums[i]];
            ++m2[s[i]];
        }

        int m1x = 0, m2x = 0;

        for (auto [val, freq] : m1)
        {
            m1x = max(m1x, freq);
        }

        for (auto [val, freq] : m2)
        {
            m2x = max(m2x, freq);
        }

        if (m1x < m2x && m1.size() <= m2.size())
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }

        cout << endl;
    }

    return 0;
}
