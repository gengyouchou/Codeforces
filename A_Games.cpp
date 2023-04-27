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

int solution(vector<int> &home, vector<int> &guest)
{

    int n = home.size();
    int count = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n ; ++j)
        {
            if (i != j)
            {
                if (home[i] == guest[j])
                {
                    ++count;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}

int main()
{
    int n = 0;
    cin >> n;

    vector<int> home(n, 0);
    vector<int> guest(n, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> home[i];
        cin >> guest[i];
    }

    solution(home, guest);

    return 0;
}