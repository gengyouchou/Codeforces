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
            nums[i] = i + 1;
        }

        for (int i = 0; i + 1 < n; i += 2)
        {
            swap(nums[i], nums[i + 1]);
        }

        if (n % 2 == 1)
        {
            swap(nums[n - 3], nums[n - 1]);
        }

        for (int i = 0; i < n; ++i)
        {
            cout << nums[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
