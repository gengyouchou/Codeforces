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

int main()
{
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {

        int n = 0;

        cin >> n;

        vector<bool> visited(n + 1, false);

        for (int i = 0; i < n * 2; ++i)
        {
            int cur = 0;
            cin >> cur;

            if (visited[cur] == false)
            {
                cout << cur << " ";
                visited[cur] = true;
            }
        }

        cout << endl;
    }

    return 0;
}