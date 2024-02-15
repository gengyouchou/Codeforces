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

    vector<int> negative, postive, zero;

    for (auto &x : vec)
    {
        if (x > 0)
        {
            postive.push_back(x);
        }
        else if (x < 0)
        {
            negative.push_back(x);
        }
        else
        {
            zero.push_back(x);
        }
    }

    if (postive.size() == 0)
    {
        postive.push_back(negative.back());
        negative.pop_back();
        postive.push_back(negative.back());
        negative.pop_back();
    }

    if (negative.size() % 2 == 0)
    {
        zero.push_back(negative.back());
        negative.pop_back();
    }

    cout << negative.size() << " ";

    for (auto &x : negative)
    {
        cout << x << " ";
    }

    cout << endl;

    cout << postive.size() << " ";

    for (auto &x : postive)
    {
        cout << x << " ";
    }

    cout << endl;

    cout << zero.size() << " ";

    for (auto &x : zero)
    {
        cout << x << " ";
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