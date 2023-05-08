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

    for (int len = 1; len <= n - 2 * k; ++len)
    {
        string left = s.substr(0, (n - len) / 2 + (n - len) % 2);
        string right = s.substr((n + len) / 2 + (n - len) % 2);

        reverse(right.begin(), right.end());
        if (left == right)
        {
            return true;
        }
    }

    return false;
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
