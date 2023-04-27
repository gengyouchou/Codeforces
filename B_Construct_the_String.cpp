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
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {

        int n, len, freq;

        cin >> n >> len >> freq;

        string s(n, 0);

        int curFreq = 0;

        for (int i = 0; i < n; ++i)
        {
            s[i] = ('a' + i % freq);
        }

        cout << s;

        cout << endl;
    }

    return 0;
}