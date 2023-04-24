#include <algorithm>
#include <iostream>
#include <map>
#include <math.h>
#include <set>
#include <stdio.h>
#include <string.h>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int solution(int left, int right)
{

    int curMx = -1;
    int ans = 0;

    for (int i = left; i <= right; ++i)
    {

        int cur = i;

        int mx = -1;
        int mn = 9;

        while (cur > 0)
        {
            mx = max(mx, cur % 10);
            mn = min(mn, cur % 10);
            cur /= 10;
        }

        if (mx - mn > curMx)
        {
            curMx = mx - mn;
            ans = i;
        }

        if (curMx == 9)
        {
            break;
        }
    }
    
    return ans;
}

int main()
{
    int n;
    cin >> n;

    for (int c = 0; c < n; ++c)
    {

        int left = 0, right = 0;
        cin >> left >> right;
        cout << solution(left, right) << endl;
    }

    return 0;
}
