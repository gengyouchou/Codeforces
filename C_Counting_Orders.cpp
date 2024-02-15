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

        int n = 0;

        cin >> n;

        vector<int> numsA(n, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> numsA[i];
        }

        vector<int> numsB(n, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> numsB[i];
        }

        sort(numsA.begin(), numsA.end());
        sort(numsB.begin(), numsB.end());

        long long ans = 1;
        long long M = 1e9 + 7;

        for (int i = 0; i < n; ++i)
        {
            auto iter = lower_bound(numsB.begin(), numsB.end(), numsA[i]);
            int cur = iter - (numsB.begin());

            // cout << cur - i << ",";

            ans = (ans * (cur - i)) % M;
        }

        cout << ans;

        cout << endl;
    }

    return 0;
}

// 9 6 8 4 5 2
// 4 1 5 6 3 1
// 2 4 5 6 8 9
// 1 1 3 4 5 6

// 2*2*2*2*2