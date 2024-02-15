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

bool isPalindrome(string &s)
{
    int i = 0;
    int j = s.size() - 1;

    while (i < j)
    {
        if (s[i] != s[j])
        {
            return false;
        }

        ++i;
        --j;
    }

    return true;
}

bool solve()
{
    int n, k;
    cin >> n >> k;

    string s;

    cin >> s;

    // final len equal to n*2^k;

    if (k == 0 || isPalindrome(s))
    {
        cout << 1;
    }
    else
    {
        cout << 2;
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;

    cin >> t;

    for (int i = 0; i < t; ++i)
    {

        solve();

        cout << endl;
    }
}

// replace the string s with s+rev(s)
// replace the string s with rev(s)+s