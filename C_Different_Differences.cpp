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

long long sumEqualOrsmaller(const int n, int mid)
{
    long long cur = 0;

    for (int i = 1; i <= mid; ++i)
    {
        cur += i;
    }

    for (int i = 0; i < n - mid; ++i)
    {
        cur += 1;
    }

    return cur;
}

int main()
{
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {
        int k = 0, n = 0;

        cin >> k >> n;

        //  We can transform the problem as follows. Let di=ai+1−ai
        // . We need to find an array [d1,d2,…,dk−1]
        //  so that the sum of elements in it is not greater than n−1
        // , all elements are positive integers, and the number of different elements is the maximum possible.

        int l = 1, r = k - 1;

        while (l < r)
        {
            int mid = r - (r - l) / 2;

            if (sumEqualOrsmaller(k - 1, mid) <= n - 1)
            {
                l = mid;
            }
            else
            {
                r = mid - 1;
            }
        }

        // cout << "l :" << l << endl;

        vector<int> ans;

        for (int i = 1; i <= l; ++i)
        {
            ans.push_back(i);
        }

        for (int i = l; i < k - 1; ++i)
        {
            ans.push_back(1);
        }

        int pre = 1;

        cout << pre << " ";

        for (int i = 0; i < k - 1; ++i)
        {
            cout << ans[i] + pre << " ";
            pre = ans[i] + pre;
        }

        cout << endl;
    }

    return 0;
}
