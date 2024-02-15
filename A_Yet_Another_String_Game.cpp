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
        string s = "";

        cin >> s;

        // Alice can makes a move either a or b
        // Bob can makes a move either z or y

        for (int i = 0; i < s.size(); ++i)
        {
            if (i % 2 == 0)
            {
                s[i] = (s[i] == 'a' ? 'b' : 'a');
            }
            else
            {
                s[i] = (s[i] == 'z' ? 'y' : 'z');
            }
        }

        cout << s;

        cout << endl;
    }

    return 0;
}
