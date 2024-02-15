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
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {

        int n = 0;

        cin >> n;

        vector<int> odd, even;

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
        }

        for (int i = 0; i < even.size(); ++i)
        {
            cout << even[i] << " ";
        }

        for (int i = 0; i < odd.size(); ++i)
        {
            cout << odd[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
