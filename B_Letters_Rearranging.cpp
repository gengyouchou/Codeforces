#include <algorithm>
#include <functional> // std::minus
#include <iostream>
#include <map>
#include <math.h>
#include <numeric> // std::accumulate
#include <set>
#include <stack>
#include <stdio.h>
#include <string.h>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {

        string s = "";
        cin >> s;

        sort(s.begin(), s.end());
        if (s[0] == s[s.size() - 1])
        {
            cout << -1;
        }
        else
        {
            cout << s;
        }

        cout << endl;
    }

    return 0;
}
