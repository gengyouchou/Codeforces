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

        int n = 0, d = 0;

        cin >> n >> d;

        string s = "";
        cin >> s;

        bool flag = false;

        for (int i = 0; i < n; ++i)
        {
            if (flag == false && s[i] < ('0' + d))
            {
                flag = true;
                cout << d;
            }

            cout << s[i];
        }

        if (flag == false)
        {
            cout << d;
        }

        cout << endl;
    }

    return 0;
}
