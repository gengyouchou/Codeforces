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

    // fq0*2020+fq1*2021=num;

    // 2020*(fq0+fq1)+a1=num;

    // 2020*(fq0+fq1)=num-fq1;

    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {

        int num = 0;

        cin >> num;

        int fq1 = num % 2020;
        int fq0 = (num - fq1) / 2020 - fq1;

        if (fq0 >= 0 && fq1 * 2021 + fq0 * 2020 == num)
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