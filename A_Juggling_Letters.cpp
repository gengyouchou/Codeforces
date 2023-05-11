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

        vector<int> count(26, 0);

        for (int i = 0; i < n; ++i)
        {

            string s;
            cin >> s;

            for (char &c : s)
            {
                ++count[c - 'a'];
            }
        }

        bool flag = true;

        for (int i = 0; i < 26; ++i)
        {
            if (count[i] % n != 0)
            {
                flag = false;
                break;
            }
        }

        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
