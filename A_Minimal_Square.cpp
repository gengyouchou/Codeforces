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

        int h = 0, w = 0;

        cin >> h >> w;

        if (h > w)
        {
            swap(h, w);
        }

        int len = max(h * 2, w);

        cout << len * len << endl;
    }

    return 0;
}