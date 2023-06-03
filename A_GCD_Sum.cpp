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

long long gcd_sum(long long num)
{
    long long digitSum = 0;

    long long temp = num;

    while (temp > 0)
    {
        digitSum += temp % 10;
        temp = temp / 10;
    }

    long long gcd = __gcd(num, digitSum);

    return gcd;
}

void solve()
{
    long long n;
    cin >> n;

    if (gcd_sum(n) > 1)
    {
        cout << n;
    }
    else if (gcd_sum(n + 1) > 1)
    {
        cout << n + 1;
    }
    else if (gcd_sum(n + 2) > 1)
    {
        cout << n + 2;
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