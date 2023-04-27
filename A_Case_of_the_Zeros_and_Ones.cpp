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

    int n;
    string s;

    cin >> n >> s;

    int rm = 0;

    stack<char> stk;

    for (int i = 0; i < n; ++i)
    {
        if (!stk.empty() && stk.top() != s[i])
        {
            rm += 2;
            stk.pop();
        }
        else
        {
            stk.push(s[i]);
        }
    }

    cout << n - rm;

    cout << endl;

    return 0;
}