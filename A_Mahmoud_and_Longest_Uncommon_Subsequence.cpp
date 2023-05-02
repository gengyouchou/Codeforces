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

    string a, b;

    cin >> a >> b;

    if (a == b)
    {
        cout << -1;
    }
    else
    {
        cout << max(a.size(), b.size());
    }
    cout << endl;

    return 0;
}