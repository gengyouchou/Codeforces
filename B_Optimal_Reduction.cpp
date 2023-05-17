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

        vector<int> temp;

        for (int i = 0; i < n; ++i)
        {

            // cout << nums[i] << " ";
            if (temp.empty() || nums[i] != temp.back())
            {
                temp.push_back(nums[i]);
            }
        }

        bool flag = true;

        for (int i = 0; i + 2 < temp.size(); ++i)
        {

            // cout << temp[i] << " ";
            if (temp[i] > temp[i + 1] && temp[i + 1] < temp[i + 2])
            {
                flag = false;
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
