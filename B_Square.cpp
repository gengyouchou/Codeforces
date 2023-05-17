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

        int a1, b1, a2, b2;

        cin >> a1 >> a2 >> b1 >> b2;

        int mxa = max(a1, a2);
        int mna = min(a1, a2);

        int mxb = max(b1, b2);
        int mnb = min(b1, b2);

        if (mxa == mxb && mna + mnb == mxa)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }

        cout << endl;
    }

    return 0;
}
