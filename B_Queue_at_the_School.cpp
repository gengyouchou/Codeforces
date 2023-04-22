
#include <algorithm>
#include <iostream>
#include <map>
#include <math.h>
#include <set>
#include <stdio.h>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

string solution(int n, int t, string &s)
{

    for (int i = 0; i < t; ++i)
    {

        string temp = s;
        for (int j = 0; j < n - 1; ++j)
        {
            if (temp[j] == 'B' && temp[j + 1] == 'G')
            {
                swap(s[j], s[j + 1]);
            }
        }
    }

    return s;
}

int main()
{
    int n = 0, t = 0;
    string s;
    cin >> n >> t;
    cin >> s;

    cout << solution(n, t, s) << endl;

    return 0;
}