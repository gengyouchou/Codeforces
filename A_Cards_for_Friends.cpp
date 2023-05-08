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

        int h, w, n;

        cin >> h >> w >> n;

        int count = 1;
        while (h % 2 == 0 || w % 2 == 0)
        {

            if (h % 2 == 0)
            {
                h = h / 2;
            }
            else
            {
                w = w / 2;
            }

            count = count * 2;
        }

        if (count >= n)
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