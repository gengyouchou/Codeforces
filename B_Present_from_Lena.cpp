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

    int n = 0;

    cin >> n;

    int total = 2 * n + 1;

    for (int i = 0; i < total; ++i)
    {
        int space = 0;
        if (i <= n)
        {
            space = 2 * (n - i);
        }
        else
        {
            space = 2 * (i - n);
        }

        int val = 0;
        int temp = 0;
        for (int j = 0; j < total - (space / 2); ++j)
        {
            if (j < space / 2 || j >= total - (space / 2))
            {
                cout << " ";
                cout << " ";
            }
            else
            {
                cout << val;
                if (j != total - (space / 2) - 1)
                {
                    cout << " ";
                }

                if (temp >= (total - space) / 2)
                {
                    --val;
                }
                else
                {
                    ++val;
                }
                ++temp;
            }
        }

        if (i != total - 1)
        {
            cout << endl;
        }
    }

    cout << endl;
}

// 0 // x x 0 x x
// 1 // x 0 1 0 x
// 2 // 0 1 2 1 0
// 3 // x 0 1 0 x
// 4 // x x 0 x x