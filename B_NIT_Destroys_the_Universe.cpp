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

        vector<int> nums(n, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i];

            // if (t == 1000 && c == 2)
            // {
            //     cout << nums[i] << " ";
            // }
        }

        // if (t == 1000 && c == 3)
        // {
        //     cout << endl;
        // }

        int j = 0;

        int count = 0;

        for (int i = 0; i < n;)
        {
            bool flag = false;

            while (j < n && nums[j] != 0)
            {
                ++j;
                flag = true;
            }

            if (flag == true)
            {
                ++count;
                i = j;
            }
            else
            {
                ++i;
                j = i;
            }
        }

        if (count == 0)
        {
            cout << 0;
        }
        else if (count == 1)
        {
            cout << 1;
        }
        else
        {
            cout << 2;
        }

        cout << endl;
    }

    return 0;
}
