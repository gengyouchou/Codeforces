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

    while (t--)
    {
        int n = 0;

        cin >> n;

        vector<int> nums(n, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i];
        }

        int even = 0;
        int odd = 0;

        for (int i = 0; i < n; ++i)
        {
            if (i % 2 != nums[i] % 2)
            {
                if (i % 2 == 0)
                {
                    ++even;
                }
                else
                {
                    ++odd;
                }
            }
        }

        if (even == odd)
        {
            cout << even;
        }
        else
        {
            cout << -1;
        }

        cout << endl;
    }

    return 0;
}