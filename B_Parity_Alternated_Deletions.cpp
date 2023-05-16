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

    vector<int> odd, even;
    long long sum = 0;

    for (int i = 0; i < n; ++i)
    {
        int cur = 0;
        cin >> cur;

        if (cur % 2 == 0)
        {
            even.push_back(cur);
        }
        else
        {
            odd.push_back(cur);
        }

        sum += cur;
    }

    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());

    int oddlen = odd.size();
    int evenlen = even.size();

    int i = 0, j = 0;

    long long ans;

    while (abs(oddlen - evenlen) > 1)
    {
        if (oddlen > evenlen)
        {
            ans += odd[i];
            ++i;
            --oddlen;
        }
        else
        {
            ans += even[j];
            ++j;
            --evenlen;
        }
    }

    cout << ans;
    cout << endl;

    return 0;
}
