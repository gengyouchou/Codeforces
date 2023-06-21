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

bool solve()
{
    int a, d, m;
    cin >> a >> d >> m;

    int p, b, g;
    cin >> g >> p >> b;

    // a-> g
    // d-> p, g
    // m-> p, b, g

    int add = min(a, g);

    a -= add;
    g -= add;

    add = min(d, g);

    d -= add;
    g -= add;

    add = min(d, p);

    d -= add;
    p -= add;

    add = min(m, p + b + g);

    m -= add;

    return a + d + m == 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    if (solve())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    cout << endl;
}