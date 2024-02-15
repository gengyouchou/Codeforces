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

int dfs(vector<int> &nums, vector<bool> &visited, int cur)
{
    if (visited[cur] == true)
    {
        return cur;
    }

    visited[cur] = true;

    return dfs(nums, visited, nums[cur]);
}

int main()
{

    int n = 0;

    cin >> n;

    vector<int> nums(n + 1, 0);

    for (int i = 1; i <= n; ++i)
    {
        cin >> nums[i];
    }

    for (int i = 1; i <= n; ++i)
    {

        vector<bool> visited(n, false);

        int ans = dfs(nums, visited, i);

        cout << ans << " ";
    }

    cout << endl;

    return 0;
}
