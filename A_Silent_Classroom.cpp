#include <algorithm>
#include <functional> // std::minus
#include <iostream>
#include <map>
#include <math.h>
#include <numeric> // std::accumulate
#include <set>
#include <stdio.h>
#include <string.h>
#include <string>
#include <unordered_map>
#include <vector>
#include <stack>

using namespace std;

int main()
{

    int n = 0;

    cin >> n;

    map<char, int> m;

    for (int i = 0; i < n; ++i)
    {

        string s = "";
        cin >> s;
        ++m[s[0]];
    }

    long long ans = 0;

    for (auto [c, freq] : m)
    {

        int a = freq / 2;
        int b = freq / 2 + freq % 2;

        ans += (a * (a - 1) / 2) + (b * (b - 1) / 2);
    }

    cout << ans;

    cout << endl;

    return 0;
}

// 1 1  12 2 2

// 121 122

// // 1 1 1
//    1 2 3

//  1 2
//  1 3
//  1 4

//  2 3
//  2 4

//  3 4

//  1
//  2+ 1
//  3+ 2+1

// 1 2 3
// 3 2 1
