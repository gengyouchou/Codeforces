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
        string s = "";

        cin >> n;
        cin >> s;

        int len = s.size();

        string ans = "";

        for (int i = 0; i < len; i += 2)
        {
            ans.insert(ans.end(), s[i]);
        }

        cout << ans;

        cout << endl;
    }

    return 0;
}

// // 1110000
// // 0110000
// 0123456
//     //    0100
