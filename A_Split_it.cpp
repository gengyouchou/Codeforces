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

bool solve(string &s, int k)
{
    int n = s.size();

    int i = 0, j = n - 1;

    if (k * 2 >= n)
    {
        return false;
    }

    while (k--)
    {
        if (s[i] != s[j])
        {
            return false;
        }

        ++i;
        --j;
    }

    return true;
}

int main()
{
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {

        int n, k;
        string s = "";

        cin >> n >> k;
        cin >> s;

        if (solve(s, k))
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
