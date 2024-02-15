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

bool solve()
{
    int n = 0;

    cin >> n;

    string s = "";

    cin >> s;

    char cur = '0';

    unordered_map<char, int> m;

    for (int i = 0; i < n; ++i)
    {

        if (m.count(s[i]) && m[s[i]] != cur)
        {
            return false;
        }

        m[s[i]] = cur;
        if (cur == '0')
        {
            cur = '1';
        }
        else
        {
            cur = '0';
        }
    }

    return true;
}

int main()
{
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {

        if (solve())
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }

        cout << endl;
    }

    return 0;
}
