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

    int n;
    string s;

    cin >> n >> s;

    int c0 = 0, c1 = 0;

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '1')
        {
            ++c1;
        }
        else
        {
            ++c0;
        }
    }

    cout << n - 2 * min(c0, c1);

    cout << endl;

    return 0;
}