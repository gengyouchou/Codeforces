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

    int n = 0;

    cin >> n;

    double ans = 0;

    while (n > 0)
    {
        ans += 1.0 / n;
        --n;
    }

    cout << ans;

    cout << endl;

    return 0;
}
