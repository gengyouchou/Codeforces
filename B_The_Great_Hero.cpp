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

        int64_t attack, init, n;

        cin >> attack >> init >> n;

        vector<int> power(n, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> power[i];
        }

        vector<int> nums(n, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i];
        }

        long long damage = 0;

        for (int i = 0; i < n; ++i)
        {
            damage += power[i] * (int64_t(nums[i] + attack - 1) / attack);
        }

        bool flag = false;

        for (int i = 0; i < n; ++i)
        {
            if (init - (damage - power[i]) > 0)
            {
                flag = true;
                break;
            }
        }

        if (flag == true)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }

        cout << endl;
    }

    return 0;
}
