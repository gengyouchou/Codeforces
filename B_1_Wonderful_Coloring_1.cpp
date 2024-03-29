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

        string s;
        cin >> s;

        // same letters must paint difference color

        unordered_map<char, int> m;

        int n = s.size();

        for (char &c : s)
        {
            ++m[c];
        }

        int count = 0;

        for (auto [val, freq] : m)
        {
            if (freq >= 2)
            {
                ++count;
            }
        }

        cout << (m.size() + count) / 2;

        cout << endl;
    }

    return 0;
}
