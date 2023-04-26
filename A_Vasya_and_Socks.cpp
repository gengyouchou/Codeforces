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

int solution(int init, int m)
{

    int curDay = 1;

    while (init > 0)
    {

        if (curDay % m == 0)
        {
            ++init;
        }

        --init;

        ++curDay;
    }

    cout << curDay-1 << endl;

    return 0;
}

int main()
{
    int init, m = 0;
    cin >> init >> m;

    solution(init, m);

    return 0;
}
