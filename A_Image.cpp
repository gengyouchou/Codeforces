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

        unordered_map<char, int> m;

        for (int i = 0; i < 4; ++i)
        {
            char cur = 0;
            cin >> cur;
            ++m[cur];
        }

        cout << m.size() - 1;

        cout << endl;
    }

    return 0;
}
