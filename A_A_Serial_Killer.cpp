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
#include <unordered_set>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

int main()
{

    string a, b;

    cin >> a >> b;

    int n = 0;

    cin >> n;

    unordered_set<string> se;

    se.insert(a);
    se.insert(b);

    for (string x : se)
    {
        cout << x << " ";
    }

    cout << endl;

    for (int i = 0; i < n; ++i)
    {
        string kill, alive;

        cin >> kill >> alive;

        se.erase(kill);
        se.insert(alive);

        for (string x : se)
        {
            cout << x << " ";
        }

        cout << endl;
    }

    return 0;
}

// ross rachel
// 4
// kill  alive

// ross joey
// rachel phoebe
// phoebe monica
// monica chandler

// ross rachel
// joey rachel
// joey phoebe
// joey monica
// joey chandler
