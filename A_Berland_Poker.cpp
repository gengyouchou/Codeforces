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

        int total, jokers, players;

        cin >> total >> jokers >> players;

        int p = total / players;

        if (p > jokers)
        {
            cout << jokers;
        }
        else
        {
            // p<jokers

            int rj = jokers - p;
            int rp = players - 1;

            cout << p - (rj + rp - 1) / rp;
        }

        cout << endl;
    }

    return 0;
}