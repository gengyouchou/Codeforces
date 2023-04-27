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

void solution(int len, vector<int> &nums1, vector<int> &nums2)
{
    int n = nums1.size();
    vector<bool> used(len + 1, false);

    for (int i = 0; i < n; ++i)
    {
        used[nums1[i]] = true;
    }

    int m = nums2.size();

    for (int i = 0; i < m; ++i)
    {
        used[nums2[i]] = true;
    }

    for (int i = 1; i <= len; ++i)
    {
        if (used[i] == false)
        {
            cout << "Oh, my keyboard!" << endl;
            return;
        }
    }

    cout << "I become the guy." << endl;

    return;
}

int main()
{

    int len = 0;

    cin >> len;

    int m = 0;

    cin >> m;

    vector<int> nums1(m, 0);

    for (int i = 0; i < m; ++i)
    {
        cin >> nums1[i];
    }

    int n = 0;

    cin >> n;

    vector<int> nums2(n, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> nums2[i];
    }

    solution(len, nums1, nums2);

    cout << endl;

    return 0;
}