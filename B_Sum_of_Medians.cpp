#include <algorithm>
#include <functional> // std::minus
#include <iostream>
#include <map>
#include <math.h>
#include <numeric> // std::accumulate
#include <set>
#include <stack>
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

        int k = 0, n = 0;

        cin >> k >> n;

        vector<int> nums(n * k, 0);

        for (int i = 0; i < n * k; ++i)
        {
            cin >> nums[i];
        }

        int i = 0, j = n * k;

        long long ans = 0;
        j -= k / 2 + 1;

        while (i <= j)
        {

            //cout << nums[j] << " ";
            ans += nums[j];

            i += (k + 1) / 2 - 1;
            j -= k / 2 + 1;
        }

        //cout << "  ";

        cout << ans;

        cout << endl;
    }

    return 0;
}
