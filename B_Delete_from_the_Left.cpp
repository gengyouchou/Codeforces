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

using namespace std;

int main()
{

    string s = "", t = "";

    cin >> s >> t;

    int n = s.size();
    int m = t.size();
    int total = m + n;

    int i = n - 1, j = m - 1;

    int count = 0;
    while (i >= 0 && j >= 0)
    {
        if (s[i] != t[j])
        {
            break;
        }
        --i;
        --j;
        count = count + 2;
    }

    cout << total - count;

    cout << endl;

    return 0;
}
