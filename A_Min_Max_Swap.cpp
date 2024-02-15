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

        int n = 0;

        cin >> n;

        vector<int> numsA(n, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> numsA[i];
        }

        vector<int> numsB(n, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> numsB[i];
        }

        for (int i = 0; i < n; ++i)
        {
            if (numsA[i] > numsB[i])
            {
                swap(numsA[i], numsB[i]);
            }
        }

        int mxA = *max_element(numsA.begin(), numsA.end());
        int mxB = *max_element(numsB.begin(), numsB.end());

        cout << mxA * mxB;
        cout << endl;
    }

    return 0;
}
