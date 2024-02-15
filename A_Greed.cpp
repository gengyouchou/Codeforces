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

    int n = 0;

    cin >> n;

    vector<vector<int>> nums(2, vector<int>(n, 0));

    for (int i = 0; i < n; ++i)
    {
        cin >> nums[0][i];
    }

    for (int i = 0; i < n; ++i)
    {
        cin >> nums[1][i];
    }

    long long total = accumulate(nums[0].begin(), nums[0].end(), 0ll);

    sort(nums[1].rbegin(), nums[1].rend());

    if (nums[1][0] + nums[1][1] >= total)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    cout << endl;

    return 0;
}

// 4 1 0 3
// 5 2 2 3

// 1 1 2 0
