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

bool solve(string &s)
{
    int n = s.size();

    char l = s[0];
    char r = s[n - 1];

    int countl = 0, countr = 0;

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == l)
        {
            ++countl;
        }
        else if (s[i] == r)
        {
            ++countr;
        }
    }

    int count = 0;

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == l)
        {
            ++count;
        }
        else if (s[i] == r)
        {
            --count;
        }
        else if (countl > countr)
        {
            --count;
        }
        else
        {
            ++count;
        }

        if (count < 0)
        {
            return false;
        }
    }

    return count == 0;
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
