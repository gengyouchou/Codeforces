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

int main()
{
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {

        string s, t;

        cin >> s >> t;

        int m = s.size();
        int n = t.size();

        int i = 0, j = 0;

        int count = 0;

        while (i < m || j < n)
        {

            if (i == m)
            {
                ++count;
                i = 0;
            }

            if (j == n)
            {
                j = 0;
            }

            if (s[i] == t[j])
            {
                ++i;
                ++j;
            }
            else
            {
                cout << -1;
                break;
            }
        }

        if (i == m && j == n)
        {

            string temp = s;

            for (int i = 0; i < count; ++i)
            {
                s = s + temp;
            }
            cout << s;
        }

        cout << endl;
    }

    return 0;
}

// XXXYYY
// XXX

//     X Y X Y X X Y X Y X
//         X Y

//             XXXYYY
//                 XY

// aaaaaaaa
// aaaaaa
