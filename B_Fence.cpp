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

using namespace std;

void solution(int w, vector<int> &arr)
{
    int n = arr.size();

    int sum = 0;
    int i = 0;
    int ans = INT_MAX;
    int ret = 0;

    for (int j = 0; j < n; ++j)
    {

        sum += arr[j];

        if (i < n && j - i + 1 > w)
        {
            sum -= arr[i];
            ++i;
        }

        if (j - i + 1 == w)
        {

            //cout << ans << "," << sum << endl;
            if (ans > sum)
            {
                ret = i + 1;
                ans = sum;
            }
        }

        
    }

    cout << ret << endl;

    return;
}

int main()
{

    int w, n = 0;

    cin >> n >> w;

    vector<int> nums(n, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i]; // {height}
    }

    solution(w, nums);

    cout << endl;

    return 0;
}