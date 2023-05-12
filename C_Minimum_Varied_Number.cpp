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

        int sum = 0;

        int cur = 9;

        vector<int> ans;

        while (sum + cur < n)
        {

            ans.push_back(cur);

            sum += cur;
            --cur;
        }

        if (sum < n)
        {
            ans.push_back(n - sum);
        }

        for (int i = ans.size() - 1; i >= 0; --i)
        {
            cout << ans[i];
        }

        cout << endl;
    }

    return 0;
}
