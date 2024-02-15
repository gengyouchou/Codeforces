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
#include <queue>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {

        int n = 0;

        cin >> n;

        string s;
        cin >> s;

        long long ans = n - 1;

        for (int i = 1; i + 1 < n; ++i)
        {
            if (s[i - 1] == s[i + 1])
            {
                --ans;
            }
        }

        cout << ans;

        cout << endl;
    }

    return 0;
}

// abacaba