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

        unordered_map<char, int> m;

        int count = 0;
        for (char &c : s)
        {
            if (m.size() >= 3 && !m.count(c))
            {
                ++count;
                m.clear();
            }

            m[c] = 1;
        }

        if (m.size() != 0)
        {
            ++count;
        }

        cout << count;
        cout << endl;
    }

    return 0;
}
