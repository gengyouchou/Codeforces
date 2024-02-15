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

    string s;
    cin >> s;

    vector<int> room(10, 0);

    for (auto &c : s)
    {
        if (c == 'L')
        {
            for (int i = 0; i < 10; ++i)
            {
                if (room[i] == 0)
                {
                    room[i] = 1;
                    break;
                }
            }
        }
        else if (c == 'R')
        {
            for (int i = 9; i >= 0; --i)
            {
                if (room[i] == 0)
                {
                    room[i] = 1;
                    break;
                }
            }
        }
        else
        {
            room[c - '0'] = 0;
        }
    }

    for (int i = 0; i < 10; ++i)
    {
        cout << room[i];
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