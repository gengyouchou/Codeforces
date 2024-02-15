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

        int a = 0, b = 0;

        cin >> a >> b;

        int ans = a ^ b;

        cout << ans;

        cout << endl;
    }

    return 0;
}

// 6  0110
// 12 1100

//    0100
