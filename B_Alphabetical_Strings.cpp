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

        int n = s.size();

        int i = 0, j = n - 1;

        bool flag = true;

        char cur = 'a' + s.size() - 1;

        while (i < j)
        {

            // cout << cur << " ";
            if (s[i] == cur && (s[j] == cur - 1 || s[i + 1] == cur - 1))
            {
                ++i;
            }
            else if (s[j] == cur && (s[i] == cur - 1 || s[j - 1] == cur - 1))
            {
                --j;
            }
            else
            {
                flag = false;
                break;
            }

            --cur;
        }

        // cout << endl;

        if (flag == true && s[i] == cur)
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
