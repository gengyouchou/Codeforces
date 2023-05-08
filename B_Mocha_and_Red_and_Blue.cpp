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
        int n = 0;
        cin >> n;

        string s(n, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> s[i];
        }

        for (int i = 0; i < n; ++i)
        {
            if (s[i] != '?')
            {
                for (int k = i - 1; k >= 0; --k)
                {

                    if (s[k] != '?')
                    {
                        break;
                    }
                    if (s[k + 1] == 'B')
                    {
                        s[k] = 'R';
                    }
                    else
                    {
                        s[k] = 'B';
                    }
                }

                for (int k = i + 1; k < n; ++k)
                {
                    if (s[k] != '?')
                    {
                        break;
                    }

                    if (s[k - 1] == 'B')
                    {
                        s[k] = 'R';
                    }
                    else
                    {
                        s[k] = 'B';
                    }
                }
            }
        }

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '?')
            {
                if (i - 1 >= 0 && s[i - 1] == 'B')
                {
                    s[i] = 'R';
                }
                else
                {
                    s[i] = 'B';
                }
            }
        }

        cout << s;
        cout << endl;
    }

    return 0;
}

// 7

// ?????B?

// BRBRBBR

// RBRBRBR
