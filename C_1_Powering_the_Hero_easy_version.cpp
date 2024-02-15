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
#include <queue>

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

        priority_queue<int> pq;

        long long sum = 0;

        for (int &num : nums)
        {
            if (num > 0)
            {
                pq.push(num);
            }
            else if (!pq.empty())
            {
                sum += pq.top();
                pq.pop();
            }
        }

        cout << sum;

        cout << endl;
    }

    return 0;
}
