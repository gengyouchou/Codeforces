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

        int n = 0;

        cin >> n;

        string s = "";

        cin >> s;

        if (s.size() <= 2 && s[0] >= s[1])
        {
            cout << "NO";
        }
        else
        {
            cout << "YES" << endl;
            cout << 2 << endl;
            cout << s[0] << " " << s.substr(1);
        }

        cout << endl;
    }

    return 0;
}
