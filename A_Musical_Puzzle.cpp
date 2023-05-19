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
#include <unordered_set>
#include <vector>

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

        set<string> se;

        for (int i = 0; i + 1 < s.size(); ++i)
        {
            string t = s.substr(i, 2);
            se.insert(t);
        }

        cout << se.size();

        cout << endl;
    }

    return 0;
}
