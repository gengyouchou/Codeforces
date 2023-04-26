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

void solution(vector<int> &boys, vector<int> &girl)
{

    sort(boys.begin(), boys.end());
    sort(girl.begin(), girl.end());

    int m = boys.size();
    int n = girl.size();

    int i = 0, j = 0;

    int pairs = 0;

    while (i < m && j < n)
    {

        if (boys[i] > girl[j])
        {
            if (boys[i] - girl[j] <= 1)
            {
                ++pairs;
                ++i;
                ++j;
            }
            else
            {
                ++j;
            }
        }
        else if (boys[i] < girl[j])
        {
            if (girl[j] - boys[i] <= 1)
            {
                ++pairs;
                ++i;
                ++j;
            }
            else
            {
                ++i;
            }
        }
        else
        {
            ++pairs;
            ++i;
            ++j;
        }
    }

    cout << pairs << endl;

    return;
}

int main()
{

    int m = 0;

    cin >> m;

    vector<int> boys(m, 0);

    for (int i = 0; i < m; ++i)
    {
        cin >> boys[i];
    }

    int n = 0;

    cin >> n;

    vector<int> girl(n, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> girl[i];
    }

    solution(boys, girl);

    cout << endl;

    return 0;
}