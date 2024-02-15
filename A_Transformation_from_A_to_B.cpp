#include <algorithm>
#include <array>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <functional> // std::minus
#include <iostream>
#include <map>
#include <math.h>
#include <numeric> // std::accumulate
#include <queue>
#include <set>
#include <stack>
#include <stdio.h>
#include <string.h>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

using ll = long long;
using ld = long double;

const ll N = 1'000'000'000'000L;

#define ab(x) (((x) < 0) ? -(x) : (x))

bool dfs(ll cur, const ll target, vector<int> &nums)
{
    if (cur == target)
    {
        nums.push_back(cur);
        return true;
    }

    if (cur > target)
    {
        return false;
    }

    if (dfs(cur * 2, target, nums))
    {
        // cout << cur << " ";

        nums.push_back(cur);
        return true;
    }
    else if (dfs(cur * 10 + 1, target, nums))
    {
        // cout << cur << " ";
        nums.push_back(cur);
        return true;
    }

    return false;
}

void solve()
{
    ll cur, target;
    cin >> cur >> target;

    vector<int> nums;
    dfs(cur, target, nums);

    int n = nums.size();

    if (n > 0 && nums[0] == target)
    {
        cout << "YES" << endl;
        cout << n << endl;

        for (int i = n - 1; i >= 0; --i)
        {
            cout << nums[i] << " ";
        }
    }
    else
    {
        cout << "NO";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();

    // if (solve())
    // {
    //     cout << "YES";
    // }
    // else
    // {
    //     cout << "NO";
    // }

    cout << endl;
}
