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

int memo[22][22][22][22];

int dfs(string &s, string &t, int si, int sj, int ti, int tj)
{

    if (ti > tj && si > sj)
    {
        return 0;
    }

    if (ti == tj && si == sj)
    {
        if (s[si] != t[ti])
        {
            return 2;
        }
        else
        {
            return 0;
        }
    }

    if (sj < 0 || tj < 0 || si >= s.size() || ti >= t.size())
    {
        return INT_MAX / 2;
    }

    if (memo[si][sj][ti][tj] != -1)
    {
        return memo[si][sj][ti][tj];
    }

    string x = s.substr(si, sj - si + 1);
    string y = t.substr(ti, tj - ti + 1);

    if (x == y)
    {
        return 0;
    }

    if (x == "" || y == "")
    {
        return INT_MAX / 2;
    }

    int a = 1 + dfs(s, t, si + 1, sj, ti, tj);
    int b = 1 + dfs(s, t, si, sj - 1, ti, tj);
    int c = 1 + dfs(s, t, si, sj, ti + 1, tj);
    int d = 1 + dfs(s, t, si, sj, ti, tj - 1);

    return memo[si][sj][ti][tj] = min(a, min(b, min(c, d)));
}

int main()
{

    int t = 0;
    cin >> t;

    while (t--)
    {
        string s = "", q = "";

        cin >> s >> q;

        memset(memo, -1, sizeof(memo));

        cout << dfs(s, q, 0, s.size() - 1, 0, q.size() - 1);
        cout << endl;
    }

    return 0;
}
