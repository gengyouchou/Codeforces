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

void solution(int init, vector<vector<int>> &arr)
{
    int n = arr.size();

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; ++i)
    {

        if (init > arr[i][0])
        {
            init += arr[i][1];
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;

    return;
}

int main()
{

    int init, n = 0;

    cin >> init >> n;

    vector<vector<int>> nums(n, vector<int>(2, 0));

    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i][0] >> nums[i][1]; // {level, points}
    }

    solution(init, nums);

    cout << endl;

    return 0;
}