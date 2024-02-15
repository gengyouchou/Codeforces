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
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {

        int n, sum, r;

        cin >> n >> sum >> r;

        cout << sum - r << " ";

        int d = r / (n - 1);
        int rr = r % (n - 1);

        for (int i = 0; i < rr; ++i)
        {
            cout << d + 1 << " ";
        }

        for (int i = 0; i < (n - 1) - rr; ++i)
        {
            cout << d << " ";
        }

        cout << endl;
    }

    return 0;
}
