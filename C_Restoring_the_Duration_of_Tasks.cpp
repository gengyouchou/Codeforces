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

        vector<int> start(n, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> start[i];
        }

        vector<int> finish(n, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> finish[i];
        }

        int cur = 0;

        for (int i = 0; i < n; ++i)
        {

            cout << finish[i] - max(start[i], cur) << " ";

            cur = finish[i];
        }

        cout << endl;
    }

    return 0;
}
