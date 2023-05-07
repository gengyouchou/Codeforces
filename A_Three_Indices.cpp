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

        vector<int> nums(n, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i];
        }

        int a0 = -1, a1 = -1, a2 = -1;

        for (int i = 0; i < n; ++i)
        {

            a1 = i;

            for (int l = 0; l < i; ++l)
            {
                if (nums[l] < nums[i])
                {
                    a0 = l;
                    break;
                }
            }

            for (int r = i + 1; r < n; ++r)
            {
                if (nums[r] < nums[i])
                {
                    a2 = r;
                    break;
                }
            }

            if (a0 != -1 && a1 != -1 && a2 != -1)
            {
                break;
            }
            else
            {
                a0 = a1 = a2 = -1;
            }
        }

        if (a0 != -1 && a1 != -1 && a2 != -1)
        {
            cout << "YES" << endl;
            cout << a0 + 1 << " " << a1 + 1 << " " << a2 + 1;
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }

    return 0;
}
