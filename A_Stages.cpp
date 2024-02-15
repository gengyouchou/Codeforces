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

    int n = 0, k = 0;

    cin >> n >> k;

    string s;

    cin >> s;

    sort(s.begin(), s.end());

    long long sum = s[0] - 'a' + 1;
    int len = 0;

    int i = 0, j = 0;

    while (j < n)
    {

        if (s[i] != s[j] && s[i] + 1 != s[j])
        {
            // cout << s[i] - 'a' << " ";
            sum += s[j] - 'a' + 1;
            i = j;
            ++len;
        }

        ++j;

        if (len == k - 1)
        {
            break;
        }
    }

    if (len == k - 1)
    {
        cout << sum;
    }
    else
    {
        cout << -1;
    }

    cout << endl;

    return 0;
}
