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

        int len = lcm(m, n);

        string ans = "";
        bool flag = false;

        for (int i = 0; i < len; ++i)
        {
            if (s[i % m] == t[i % n])
            {
                ans.insert(ans.end(), t[i % n]);
            }
            else
            {
                flag = true;
                cout << -1;
                break;
            }
        }

        if (flag == false)
        {
            cout << ans;
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
