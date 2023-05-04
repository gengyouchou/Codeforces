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
        int a, b;

        cin >> n >> a >> b;

        string s;

        cin >> s;

        int k = 0;

        if (b >= 0)
        {
            k = n;
        }
        else
        {
            int blocks = 1;
            for (int i = 1; i < n; ++i)
            {
                if (s[i] != s[i - 1])
                {
                    ++blocks;
                }
            }

            //cout << "block: " << blocks << endl;

            k = blocks / 2 + 1;
        }

        //cout << "k " << k << endl;

        cout << a * n + b * k;
        cout << endl;
    }

    return 0;
}