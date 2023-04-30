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

    int n;

    cin >> n;

    int count = n / 2;
    int r = n % 2;

    if (r > 0)
    {
        count = count - 1;
    }

    cout << count + r << endl;

    for (int i = 0; i < count; ++i)
    {
        cout << 2 << " ";
    }

    if (r > 0)
    {
        cout << 3 << endl;
    }

    return 0;
}