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

ll M = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    unordered_map<int, vector<int>> m;

    for (int i = 0; i < n; ++i)
    {
        m[vec[i]].push_back(i + 1);
    }

    ll sum = accumulate(vec.begin(), vec.end(), 0ll);

    ll subsum = sum / (n / 2);

    for (int i = 0; i < n; ++i)
    {
        if (m.count(vec[i]) && !m[vec[i]].empty())
        {
            int a = m[vec[i]].back();
            m[vec[i]].pop_back();

            int b = m[subsum - vec[i]].back();
            m[subsum - vec[i]].pop_back();

            cout << a << " " << b << endl;
        }
    }
}

// 1 3 5 4 4 7
// sum=24
// 24/(n/2)=8;

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