
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
    int n = 0, k = 0;

    cin >> n >> k;

    string s = "";
    cin >> s;

    unordered_map<char, int> m;

    for (char &c : s)
    {
        ++m[c];
    }

    for (auto [val, freq] : m)
    {
        if (freq > k)
        {
            return false;
        }
    }

    return true;
}

int main()
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

    return 0;
}
