
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

    while (true)
    {
        bool m[10];
        memset(m, false, sizeof(m));

        ++n;

        int temp = n;

        while (temp > 0)
        {
            int cur = temp % 10;
            if (m[cur] == true)
            {
                break;
            }
            m[cur] = true;
            temp /= 10;
        }

        if (temp == 0)
        {
            cout << n << endl;
            return 0;
        }
    }

    return 0;
}

int main()
{
    int n = 0;
    cin >> n;

    solution(n);

    return 0;
}