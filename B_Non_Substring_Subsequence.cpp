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

        int n = 0, query = 0;

        cin >> n >> query;

        string s = "";

        cin >> s;

        // 000[101]000

        vector<int> countleft0(n, 0);
        vector<int> countleft1(n, 0);
        vector<int> countright0(n, 0);
        vector<int> countright1(n, 0);

        for (int i = 0; i < n; ++i)
        {
            countleft0[i] += (i - 1 >= 0 ? countleft0[i - 1] : 0) + (s[i] == '0');
            countleft1[i] += (i - 1 >= 0 ? countleft1[i - 1] : 0) + (s[i] == '1');
        }

        for (int i = n - 1; i >= 0; --i)
        {
            countright0[i] += (i + 1 < n ? countright0[i + 1] : 0) + (s[i] == '0');
            countright1[i] += (i + 1 < n ? countright1[i + 1] : 0) + (s[i] == '1');
        }

        for (int q = 0; q < query; ++q)
        {
            int l, r;

            cin >> l >> r;

            --r;
            --l;

            bool poss1 = false, poss2 = false;

            if (s[l] == '0')
            {
                if (countleft0[l] > 1)
                {
                    poss1 = true;
                }
            }
            else
            {
                if (countleft1[l] > 1)
                {
                    poss1 = true;
                }
            }

            if (s[r] == '0')
            {
                if (countright0[r] > 1)
                {
                    poss2 = true;
                }
            }
            else
            {
                if (countright1[r] > 1)
                {
                    poss2 = true;
                }
            }

            if (poss1 == true || poss2 == true)
            {
                cout << "YES";
            }
            else
            {
                cout << "NO";
            }

            cout << endl;
        }
    }

    return 0;
}
