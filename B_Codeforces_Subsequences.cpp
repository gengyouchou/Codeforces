
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <math.h>
#include <stdio.h>

using namespace std;

int solution(long long n)
{

    string s = "codeforces";

    int l = s.size();
    int p = 0;

    long long cur = 1;

    vector<int> ans(l, 1);

    while (true)
    {

        for (int i = 0; i < l; ++i)
        {
            cur = cur * ans[i];
        }

        if (cur < n)
        {
            cur = 1;

            if (p >= l)
            {
                p = 0;
            }
            ++ans[p];
            ++p;
        }
        else
        {
            break;
        }
    }

    string ret = "";

    for (int i = 0; i < l; ++i)
    {
        ret.insert(ret.end(), ans[i], s[i]);
    }

    cout << ret << endl;

    return 0;
}

int main()
{
    long long n = 0;
    cin >> n;

    solution(n);

    return 0;
}

// Input

// 421654016

// Output

// cccccccooooooodddddddeeeeeeefffffffooooooorrrrrrrccccccceeeeeeesssssss

// Answer
// ccccccccooooooooddddddddeeeeeeefffffffooooooorrrrrrrccccccceeeeeeesssssss

// Checker Log

// wrong answer 282475249 < 421654016 occurences
