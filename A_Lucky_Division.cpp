
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

    for (int i = 0; i <= n; ++i)
    {

        bool flag = false;

        string s = to_string(i);

        for (int j = 0; j < s.length(); ++j)
        {
            if (s[j] == '4' || s[j] == '7')
            {
                continue;
            }

            flag = true;
        }

        if (flag == false)
        {
            if (n % i == 0)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;

    return 0;
}

int main()
{
    int n = 0;
    cin >> n;

    solution(n);

    return 0;
}
