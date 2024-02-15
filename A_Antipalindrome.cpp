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

void solve()
{
    string s;
    cin >> s;

    int n = s.size();

    bool diff = false;

    for (int i = 1; i < n; ++i)
    {
        if (s[i] != s[i - 1])
        {
            diff = true;
        }
    }

    bool isP = true;

    int i = 0, j = n - 1;

    while (i < j)
    {
        if (s[i] != s[j])
        {
            isP = false;
            break;
        }
        ++i;
        --j;
    }

    if (diff != true)
    {
        cout << 0;
    }
    else if (isP == false)
    {
        cout << n;
    }
    else
    {
        cout << n - 1;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();

    // if (solve())
    // {
    //     cout << "YES";
    // }
    // else
    // {
    //     cout << "NO";
    // }

    cout << endl;
}