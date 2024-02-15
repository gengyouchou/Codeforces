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

void solve()
{

    string start, end;
    cin >> start >> end;

    // vector<vector<int>> vec(9, vector<int>(9, 0));

    // int x1 = start[0] - 'a', y1 = start[1] - '1';
    // int x2 = end[0] - 'a', y2 = '8' - end[1];

    // cout << x1 << "," << y1 << endl;
    // cout << x2 << "," << y2 << endl;

    int h = end[0] - start[0];
    int v = end[1] - start[1];

    // cout << h << "," << v << endl;

    cout << max(ab(h), ab(v)) << endl;

    while (h != 0 || v != 0)
    {
        string steps = "";

        if (h > 0)
        {
            --h;
            steps += 'R';
        }

        if (h < 0)
        {
            ++h;
            steps += 'L';
        }

        if (v > 0)
        {
            --v;
            steps += 'U';
        }

        if (v < 0)
        {
            ++v;
            steps += 'D';
        }

        cout << steps << endl;
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