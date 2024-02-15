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

    string temp = "aabb";

    while (n > 0)
    {

        for (int i = 0; i < temp.size(); ++i)
        {

            cout << temp[i];
            --n;
            if (n == 0)
            {
                break;
            }
        }
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

// Test: #3, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 1, verdict: WRONG_ANSWER
// Input

// 38

// Output

// abbcabbcabbcabbcabbcabbcabbcabbcabbcab

// Answer

// aabbaabbaabbaabbaabbaabbaabbaabbaabbaa

// Checker Log

// wrong answer Line [name=ans] equals to "abbcabbcabbcabbcabbcabbcabbcabbcabbcab", doesn't correspond to pattern "[ab]{1,200000}"
