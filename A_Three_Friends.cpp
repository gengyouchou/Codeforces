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

        vector<int> vec(3, 0);

        for (int i = 0; i < 3; ++i)
        {
            cin >> vec[i];
        }

        int diff = abs(vec[0] - vec[1]) + abs(vec[0] - vec[2]) + abs(vec[2] - vec[1]) - 4;

        cout << max(diff, 0);
        cout << endl;
    }

    return 0;
}