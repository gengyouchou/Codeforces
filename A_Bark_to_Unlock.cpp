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

bool solve()
{

    string pass;
    cin >> pass;

    int n;
    cin >> n;

    vector<string> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {

            if ((vec[i][0] == pass[1] && vec[j][1] == pass[0]) || (vec[i][1] == pass[0] && vec[j][0] == pass[1]))
            {
                return true;
            }
            else if (i == j && vec[i][0] == pass[0] && vec[i][1] == pass[1])
            {
                return true;
            }
        }
    }

    return false;
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