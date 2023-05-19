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

        int right = max_element(nums.begin() + 1, nums.end()) - nums.begin();

        cout << "right: " << right << endl;

        int left = 0;

        if(right-1>=0 && nums[right-1]>nums[0]){
            left = max_element(nums.begin(), nums.begin() + right)-nums.begin();
        }else{
            left = 0;
        }

    

        cout << "left: " << left << endl;

        for (int i = right; i < n; ++i)
        {
            cout << nums[i] << " ";
        }

        for (int i = left; i <right; ++i)
        {
            cout << nums[i] << " ";
        }

        for (int i = 0; i < left; ++i)
        {
            cout << nums[i] << " ";
        }

        cout << endl;
    }

    return 0;
}

// 4 1 6 7 2 8 5 L 3 R 9 -1

//  L  9  R| 4 1 6 7 2 8 5 3

// 2 3 1 L 5 R 4 -1
// 2 L 3 1 R 5 4
// R 5 4 |2 3 L 1
