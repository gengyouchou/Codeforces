#include <algorithm>
#include <functional> // std::minus
#include <iostream>
#include <map>
#include <math.h>
#include <numeric> // std::accumulate
#include <queue>
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

        int n = 0;

        cin >> n;

        for (int i = 1; i <= n; ++i)
        {
            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}

// 001
// 010
// 011
// 100
// 101
// 110
// 111

// 1+2+3+4
