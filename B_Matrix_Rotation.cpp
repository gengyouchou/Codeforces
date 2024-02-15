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

        vector<int> mat(4, 0);

        for (int i = 0; i < 4; ++i)
        {
            cin >> mat[i];
        }

        int mxpos = max_element(mat.begin(), mat.end()) - mat.begin();
        int mnpos = min_element(mat.begin(), mat.end()) - mat.begin();

        if (mxpos + mnpos == 3)
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
