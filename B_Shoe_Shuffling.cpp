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
        }

        unordered_map<int, vector<int>> m;

        for (int i = 0; i < n; ++i)
        {
            m[nums[i]].push_back(i);
        }

        bool flag = true;

        for (auto [val, vec] : m)
        {
            if (vec.size() <= 1)
            {
                flag = false;
                break;
            }
            int cur = vec.back();
            vec.insert(vec.begin(), cur);
            vec.pop_back();

            m[val] = vec;
        }

        if (flag == true)
        {
            vector<int> ans;

            for (int i = n - 1; i >= 0; --i)
            {
                ans.push_back(m[nums[i]].back() + 1);
                m[nums[i]].pop_back();
            }

            reverse(ans.begin(), ans.end());

            for (int i = 0; i < n; ++i)
            {
                cout << ans[i] << " ";
            }
        }
        else
        {
            cout << -1;
        }

        cout << endl;
    }

    return 0;
}
