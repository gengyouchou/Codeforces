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

    vector<pair<int, int>> p;

    for (int i = 0; i < n; ++i)
    {
        p.push_back({nums[i], i});
    }

    sort(p.rbegin(), p.rend());

    int times = 0;
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        ans += times * p[i].first + 1;
        ++times;
    }

    cout << ans << endl;

    for (int i = 0; i < n; ++i)
    {
        cout << p[i].second + 1 << " ";
    }

    cout << endl;

    return 0;
}
