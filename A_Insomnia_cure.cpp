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

    int k, l, m, n;

    cin >> k >> l >> m >> n;

    int d = 0;

    cin >> d;

    int dam = 0;

    for (int i = 1; i <= d; ++i)
    {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
        {
            ++dam;
        }
    }

    cout << dam << endl;

    return 0;
}