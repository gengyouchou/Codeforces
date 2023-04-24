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

int solution(vector<int> &coins)
{
    int n = coins.size();

    sort(coins.rbegin(), coins.rend());

    int total = accumulate(coins.begin(), coins.end(), 0);
    int sum = 0;

    for (int i = 0; i < n; ++i)
    {
        sum += coins[i];
        if (sum > total / 2)
        {
            return i + 1;
        }
    }

    return -1;
}

int main()
{

    int n = 0;

    cin >> n;

    vector<int> coins(n, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> coins[i];
    }

    int ans = solution(coins);

    cout << ans;

    return 0;
}