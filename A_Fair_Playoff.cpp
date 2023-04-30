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
    while (t--)
    {
        int a, b, c, d;

        cin >> a >> b >> c >> d;

        if (max(a, b) < min(c, d) || min(a, b) > max(c, d))
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }

        cout << endl;
    }

    return 0;
}