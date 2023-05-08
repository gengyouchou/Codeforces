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

bool isPerfectSquare(int num)
{
    long long l = 1;
    long long r = num / 2;

    while (l < r)
    {
        long long mid = l + (r - l) / 2;

        long long cur = mid * mid;

        if (cur >= num)
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }

    return l * l == num;
}

int main()
{

    int t = 0;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n == 2 || n == 4 ||
            (n % 2 == 0 && isPerfectSquare(n / 2)) ||
            (n % 4 == 0 && isPerfectSquare(n / 4)))
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
