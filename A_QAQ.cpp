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

int solve(string &s, string &t)
{
    int n = s.size();
    int m = t.size();

    int count = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            for (int k = j + 1; k < n; ++k)
            {
                if (s[i] == t[0] && s[j] == t[1] && s[k] == t[2])
                {
                    ++count;
                }
            }
        }
    }

    return count;
}

int main()
{

    string s = "";

    cin >> s;

    string t = "QAQ";

    int count = solve(s, t);

    cout << count;

    cout << endl;

    return 0;
}
