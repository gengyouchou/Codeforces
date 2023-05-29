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

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;

#define mp make_pair
#define pb push_back
#define F first
#define S second
#define ab(x) (((x) < 0) ? -(x) : (x))

bool solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    map<int, int> m;

    for (auto &x : vec)
    {
        ++m[x];
    }

    int len = 0;

    vector<int> ans;

    while (len < n)
    {
        for (auto [val, freq] : m)
        {
            if (freq > 0)
            {
                ans.push_back(val);
                --m[val];
                ++len;
            }
        }
    }

    for (auto &x : ans)
    {
        cout << x << " ";
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