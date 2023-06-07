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

using ll = long long;
using ld = long double;

const ll N = 1'000'000'000'000L;

#define ab(x) (((x) < 0) ? -(x) : (x))

bool isPalind(string s)
{
    int i = 0, j = s.size() - 1;

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
void solve()
{

    string s;
    cin >> s;

    unordered_set<char> se(s.begin(), s.end());

    if (se.size() == 1 && s[0] == 'a')
    {
        cout << "NO";
        return;
    }

    cout << "YES" << endl;

    if (isPalind(s + "a") == false)
    {
        cout << s + "a";
        return;
    }
    else
    {
        cout << "a" + s;
    }
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
}