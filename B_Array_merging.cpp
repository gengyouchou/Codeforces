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
    vector<int> vec1(n);
    for (auto &x : vec1)
    {
        cin >> x;
    }

    vector<int> vec2(n);
    for (auto &x : vec2)
    {
        cin >> x;
    }

    int count = 1;

    int pre = -1;

    unordered_map<int, int> m1;

    for (int i = 0; i < n; ++i)
    {

        if (vec1[i] == pre)
        {
            ++count;
        }
        else
        {
            count = 1;
        }

        m1[vec1[i]] = max(m1[vec1[i]], count);

        pre = vec1[i];
    }

    count = 1;

    pre = -1;

    unordered_map<int, int> m2;

    for (int i = 0; i < n; ++i)
    {

        if (vec2[i] == pre)
        {
            ++count;
        }
        else
        {
            count = 1;
        }

        m2[vec2[i]] = max(m2[vec2[i]], count);

        pre = vec2[i];
    }

    int ans = 1;

    for (auto [val, freq] : m1)
    {
        ans = max(ans, freq + m2[val]);
    }

    for (auto [val, freq] : m2)
    {
        ans = max(ans, freq + m1[val]);
    }

    cout << ans;

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

// 1 2 3 2 2
// 2 3 5 4 5
