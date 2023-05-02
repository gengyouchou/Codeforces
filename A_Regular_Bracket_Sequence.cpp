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

void solve(string &s)
{

    int n = s.size();

    if (n % 2 != 0)
    {
        cout << "NO";
        return;
    }

    if (s[0] != ')' && s[n - 1] != '(')
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

int main()
{
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {

        string s = "";

        cin >> s;

        solve(s);

        cout << endl;
    }

    return 0;
}