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

    int n = 0, names = 0;

    cin >> n >> names;

    vector<int> nums(n, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    vector<int> ans(n, 0);

    int r = 0;

    for (int i = 0; i < n; ++i)
    {

        int cur = nums[i] + r;

        int f = cur / names;
        r = cur % names;

        int count = 0;

        if (f > 0)
        {
            count += f;
        }

        ans[i] = count;
    }

    for (int i = 0; i < n; ++i)
    {
        cout << ans[i] << " ";
    }

    cout << endl;

    return 0;
}

// 3 7 9

//     cur 5 2 -
//     5