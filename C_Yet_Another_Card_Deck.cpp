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
    int n, m;
    cin >> n >> m;

    vector<int> deck(n);
    for (auto &x : deck)
    {
        cin >> x;
    }

    vector<int> q(m);
    for (auto &x : q)
    {
        cin >> x;
    }

    for (auto &qq : q)
    {
        auto iter = find(deck.begin(), deck.end(), qq) - deck.begin();

        cout << iter + 1 << " ";

        rotate(deck.begin(), deck.begin() + iter, deck.begin() + iter + 1);
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