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

    int n, mins;

    cin >> n >> mins;

    vector<int> song(n, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> song[i];
    }

    // song[i]+10 + song[i+1]+10 ... +sum[n-1]

    int sum = accumulate(song.begin(), song.end(), 0) + 10 * (n - 1);

    if (sum > mins)
    {
        cout << -1;
    }
    else
    {
        cout << (n - 1) * 2 + (mins - sum) / 5;
    }

    cout << endl;

    return 0;
}