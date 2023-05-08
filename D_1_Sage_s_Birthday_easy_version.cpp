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

    int n = 0;

    cin >> n;

    vector<int> nums(n, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    int i = 0, j = n - 1;

    vector<int> ans;

    while (i <= j)
    {
        if (ans.size() % 2 == 0)
        {
            ans.push_back(nums[j]);
            --j;
        }
        else
        {
            ans.push_back(nums[i]);
            ++i;
        }
    }

    cout << n / 2 - (n % 2 == 0) << endl;

    for (int &a : ans)
    {
        cout << a << " ";
    }

    cout << endl;

    return 0;
}
