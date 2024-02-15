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

        string s = "";

        cin >> s;

        vector<int> count;

        int j = 0;

        for (int i = 0; i < s.size(); ++i)
        {

            j = i;

            while (j < s.size() && s[j] == '1')
            {
                ++j;
            }

            if (j - i > 0)
            {
                count.push_back(j - i);
            }

            i = j;
        }

        sort(count.rbegin(), count.rend());

        int sum = 0;

        for (int i = 0; i < count.size(); i += 2)
        {
            // cout << count[i] << " ";
            sum += count[i];
        }

        // cout << "ans: ";

        cout << sum;

        cout << endl;
    }

    return 0;
}
