#include <algorithm>
#include <iostream>
#include <map>
#include <math.h>
#include <set>
#include <stdio.h>
#include <string.h>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

bool solution(vector<vector<int>> &edges, int k)
{

    int l = 0;
    int r = 0;

    for (vector<int> &e : edges)
    {
        if (e[0] == k)
            ++l;
        if (e[1] == k)
            ++r;
    }

    return l > 0 && r > 0;
}

int main()
{
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {

        int n = 0, k = 0;

        cin >> n >> k;

        vector<vector<int>> edges(n, vector<int>(2, 0));

        for (int i = 0; i < n; ++i)
        {
            cin >> edges[i][0] >> edges[i][1];
        }

        if (solution(edges, k) == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}