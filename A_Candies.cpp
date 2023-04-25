
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

int solution(int n)
{

    for (int k = 2; k < 31; ++k)
    {

        int p = (1 << k) - 1;

        // cout << "p " << p << endl;
        if (n % p == 0)
        {
            return n / p;
        }
    }

    return 0;
}

int main()
{
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {

        int n = 0;

        cin >> n;

        cout << solution(n);
        cout << endl;
    }

    return 0;
}