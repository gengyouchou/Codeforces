#include <algorithm>
#include <functional> // std::minus
#include <iostream>
#include <map>
#include <math.h>
#include <numeric> // std::accumulate
#include <set>
#include <stack>
#include <stdio.h>
#include <string.h>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

bool solve()
{
    int x = 0;

    cin >> x;

    int up = x / 3;

    for (int i = 0; i <= up; ++i)
    {
        if ((x - 3 * i) % 7 == 0)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {

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

    return 0;
}

// 23

//     7

// 22

// 3*5=15 + 7*1=22

// 29

// 7*2=14+3*5=15=29