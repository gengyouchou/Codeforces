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

        int a, b;

        cin >> a >> b;

        if (b <= 1)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES" << endl;
            cout << a << " " << (a * (long long)b) << " " << (a * (long long)(b + 1));
        }

        cout << endl;
    }

    return 0;
}