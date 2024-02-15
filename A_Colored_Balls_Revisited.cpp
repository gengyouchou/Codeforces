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
#include <queue>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {

        int n = 0;

        cin >> n;

        vector<pair<int, int>> nums(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i].first;
            nums[i].second = i + 1;
        }

        sort(nums.rbegin(), nums.rend());

        cout << nums[0].second;

        cout << endl;
    }

    return 0;
}
