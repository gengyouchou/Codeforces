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

    int n = 0, k = 0;

    cin >> n >> k;

    if (k == 0)
    {
        cout << 1 << endl;
        return 0;
    }

    int d = (n + 1) / 2;

    int ans = 0;

    if (k < d)
    {
        ans = k;
    }
    else
    {
        ans = n - k;
    }

    cout << ans;

    cout << endl;

    return 0;
}