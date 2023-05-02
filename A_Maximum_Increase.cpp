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

    int n = 0;

    cin >> n;

    int *preptr = nullptr;
    int pre = 0;

    int ans = 0, len = 0;

    for (int i = 0; i < n; ++i)
    {
        int cur = 0;
        cin >> cur;

        if (preptr == nullptr || cur <= *preptr)
        {
            len = 1;
        }
        else
        {
            ++len;
        }

        ans = max(ans, len);
        pre = cur;
        preptr = &pre;
    }

    cout << ans;

    cout << endl;

    return 0;
}