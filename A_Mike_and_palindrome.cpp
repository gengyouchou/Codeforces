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

    string s = "";
    cin >> s;

    int i = 0, j = s.size() - 1;

    int count = 0;

    while (i < j)
    {
        if (s[i] != s[j])
        {
            ++count;
        }

        ++i;
        --j;
    }

    return count == 1 || (count == 0 && i == j);
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
