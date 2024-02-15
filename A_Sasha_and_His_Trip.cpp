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

    int n = 0, v = 0;

    cin >> n >> v;
    int cost = 0;
    int tank = 0;

    for (int i = 1; i <= n; ++i)
    {

        if (n - i > tank)
        {
            cost += i * min(v - tank, n - i);
            tank = min(v, n - i);
        }

        --tank;
    }

    cout << cost;

    cout << endl;

    return 0;
}
