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
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {

        string s;

        cin >> s;

        int p = 0;
        cin >> p;

        int n = s.size();

        vector<vector<int>> pair;

        int sum = 0;

        for (int i = 0; i < n; ++i)
        {
            pair.push_back({s[i] - 'a', i});
            sum += 1 + s[i] - 'a';
        }

        sort(pair.begin(), pair.end());

        while (sum > p && !pair.empty())
        {
            sum = sum - (pair.back()[0] + 1);
            pair.pop_back();
        }

        sort(pair.begin(), pair.end(),
             [&](vector<int> &a, vector<int> &b)
             {
                 return a[1] < b[1];
             });

        for (int i = 0; i < pair.size(); ++i)
        {
            cout << (char)(pair[i][0] + 'a');
        }

        cout << endl;
    }

    return 0;
}
