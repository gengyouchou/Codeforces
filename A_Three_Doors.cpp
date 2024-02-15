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

        int key = 0;

        cin >> key;

        vector<int> nums(3, 0);

        for (int i = 0; i < 3; ++i)
        {
            cin >> nums[i];
        }

        if (nums[key - 1] != 0 && nums[nums[key - 1] - 1] != 0)
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
