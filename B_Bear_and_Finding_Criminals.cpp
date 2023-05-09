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

    int n = 0, pos = 0;

    cin >> n >> pos;

    vector<int> nums(n, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    int l = pos - 1;
    int r = pos - 1;

    int count = 0;

    while (l >= 0 || r < n)
    {
        if (l >= 0 && r < n)
        {
            if (nums[l] == 1 && nums[r] == 1)
            {
                count = count + 2 - (l == r);
            }
        }
        else if (l >= 0 || r < n)
        {
            if (r < n)
            {
                if (nums[r] == 1)
                {
                    ++count;
                }
            }
            else if (l >= 0)
            {
                if (nums[l] == 1)
                {
                    ++count;
                }
            }
        }

        --l;
        ++r;
    }

    cout << count;
    cout << endl;

    return 0;
}
