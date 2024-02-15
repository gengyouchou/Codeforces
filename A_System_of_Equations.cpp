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
    int n, m;
    cin >> n >> m;

    // a^2+b=n
    // a+b^2=m

    int count = 0;
    for (int i = 0; i <= sqrt(n * m); ++i)
    {
        for (int j = 0; j <= sqrt(n * m); ++j)
        {
            if (i * i + j == n && j * j + i == m)
            {
                ++count;
            }
        }
    }

    cout << count;
    cout << endl;

    return 0;
}
