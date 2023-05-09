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

        int n = 0;

        cin >> n;

        int step = n / 2 + n % 2;

        cout << step << endl;
        int i = 1;
        int j = 3 * n;

        while (i < j)
        {
            cout << i << " " << j << endl;
            i += 3;
            j -= 3;
        }
        // // BAN BAN BAN  B  A  N
        //    123 456 789 10 11 12

        //         2

        // 1 12

        // 4 9

        //    AAN BBN
        // AAABBNBNNBAN

        // BAN BAN

        // cout << endl;
    }

    return 0;
}