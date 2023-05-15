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

bool solve(string &s)
{
    int n = s.size();

    vector<bool> left(n, false);
    vector<bool> right(n, false);

    bool cur = false;
    for (int i = 1; i < n; ++i)
    {
        if (s[i] == '1' && s[i] == s[i - 1])
        {
            cur = true;
        }

        left[i] = cur;
    }

    cur = false;

    for (int i = n - 2; i >= 0; --i)
    {
        if (s[i] == '0' && s[i] == s[i + 1])
        {
            cur = true;
        }

        right[i] = cur;
    }

    for (int i = 0; i + 1 < n; ++i)
    {
        if (left[i] == true && right[i + 1] == true)
        {
            return false;
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

        string s = "";

        cin >> s;

        if (solve(s))
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
