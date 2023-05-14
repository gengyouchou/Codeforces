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

int main()
{
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {

        int n = 0;

        cin >> n;

        map<int, int> m;

        for (int i = 0; i < n; ++i)
        {
            int cur = 0;
            cin >> cur;
            ++m[cur];
        }

        int mx = 0;

        for (auto [val, freq] : m)
        {
            mx = max(mx, freq);
        }

        int count = 0;

        while (mx < n)
        {
            int op = min(mx, n - mx);
            count += 1 + op;
            mx *= 2;
        }

        cout << count;

        cout << endl;
    }

    return 0;
}
