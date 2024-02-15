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

        string s = "";

        cin >> s;

        vector<int> v0, v1;

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1')
            {
                v1.push_back(nums[i]);
            }
            else
            {
                v0.push_back(nums[i]);
            }
        }

        sort(v1.begin(), v1.end());
        sort(v0.begin(), v0.end());

        unordered_map<int, int> m;

        int cur = 1;

        for (int &v : v0)
        {
            m[v] = cur;
            ++cur;
        }

        for (int &v : v1)
        {
            m[v] = cur;
            ++cur;
        }

        for (int &num : nums)
        {
            cout << m[num] << " ";
        }

        cout << endl;
    }

    return 0;
}
