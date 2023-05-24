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

    int n = 0;

    cin >> n;

    vector<int> nums(n, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    long long sum = accumulate(nums.begin(), nums.end(), 0ll);

    sort(nums.begin(), nums.end());

    int ans = 0;
    long long add = 0;
    int i = 0;

    // sum/n > 4.5
    // sum*10 > 45*n
    while ((sum + add) * 10 < n * 45)
    {
        ++ans;
        sum += (5 - nums[i]);
        ++i;
    }

    cout << ans;

    cout << endl;

    return 0;
}
