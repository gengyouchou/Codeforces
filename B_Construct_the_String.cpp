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

        int n, len, freq;

        cin >> n >> len >> freq;

        unordered_map<char, int> m;
        int j = 0;

        string s = "";

        int curFreq = 0;

        for (int i = 0; i < n; ++i)
        {

            while (j < n && j - i + 1 <=len)
            {

                if (curFreq < freq)
                {
                    for (int k = 0; k < 26; ++k)
                    {
                        if (m['a' + k] == 0)
                        {
                            s.insert(s.end(), 'a' + k);
                            ++m['a' + k];
                            break;
                        }
                    }

                    ++curFreq;
                }
                else
                {
                    for (int k = 0; k < 26; ++k)
                    {
                        if (m['a' + k] > 0)
                        {
                            s.insert(s.end(), 'a' + k);
                            ++m['a' + k];
                            break;
                        }
                    }
                }

                ++j;
            }

            --m[s[i]];

            if (m[s[i]] == 0)
            {
                --curFreq;
            }
        }

        cout << s;

        cout << endl;
    }

    return 0;
}