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
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;

    // a1=a*b
    // a2=b*c
    // a3=a*c

    // a=(a1/(a2/(a3/a)))
    // a^2=a1*a3/a2

    int a = sqrt((a1 * a3) / a2);
    int b = sqrt((a2 * a3) / a1);
    int c = sqrt((a2 * a1) / a3);

    int ans = (a + b + c) * 4;

    cout << ans;
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