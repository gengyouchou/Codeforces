#include <algorithm>
#include <array>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <functional> // std::minus
#include <iostream>
#include <map>
#include <math.h>
#include <numeric> // std::accumulate
#include <queue>
#include <set>
#include <stack>
#include <stdio.h>
#include <string.h>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

#define ab(x) (((x) < 0) ? -(x) : (x))

bool solve()
{
    string s;

    cin >> s;

    int i = 0, j = s.size() - 1;

    while (i < j)
    {
        if (s[i] == s[j])
        {
            ++i;
            --j;
        }
        else if (i == 0 && s[j] == '0')
        {
            --j;
        }
        else
        {
            return false;
        }
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // int t = 0;

    // cin >> t;

    // for (int i = 0; i < t; ++i)
    // {
    // solve();

    if (solve())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    cout << endl;
    //}
}