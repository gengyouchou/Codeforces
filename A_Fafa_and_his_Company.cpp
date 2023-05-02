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

    int n = 0;

    cin >> n;

    int count = 0;

    for (int i = 1; i <= n / 2; ++i)
    {
        if ((n - i) % i == 0)
        {
            ++count;
        }
    }

    cout << count;

    cout << endl;

    return 0;
}