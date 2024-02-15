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

bool solve()
{
    int n;
    cin >> n;

    vector<int> vec(n, 0);

    for (auto &x : vec)
    {
        cin >> x;
    }

    int mxIdx = max_element(vec.begin(), vec.end()) - vec.begin();

    bool res = true;

    for (int i = 1; i < mxIdx; ++i)
    {
        res &= (vec[i] > vec[i - 1]);
    }

    for (int i = mxIdx + 1; i < n; ++i)
    {
        res &= (vec[i] < vec[i - 1]);
    }

    return res;
}

// 1 3 4 2
// 0 1 2 3

//  a+1 a a+2 a+3
//  a+1 a+3 a+4 a+2
//  a+2 a+4 a+1 a+3
//  a+3 a+4 a+2 a+1

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