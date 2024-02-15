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

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }
    sort(vec.rbegin(), vec.rend());

    map<int, int> m;

    for (auto &x : vec)
    {
        ++m[x];
    }

    vector<int> ans;

    for (int i = 0; i < n; ++i)
    {

        int cur = vec[i];

        if (!m.count(cur))
        {
            continue;
        }

        ans.push_back(cur);

        --m[cur];
        if (m[cur] == 0)
        {
            m.erase(cur);
        }

        map<int, int> tempm = m;

        for (auto [val, freq] : tempm)
        {
            if (cur != val && cur % val == 0)
            {
                --freq;
                if (freq == 0)
                {
                    m.erase(val);
                }
            }
        }
    }

    cout << ans[0] << " " << ans[1];
}

// 10 2 8 1 2 4 1 20 4 5
// 1 1 2 2

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