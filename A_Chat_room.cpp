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

bool solution(string s)
{
    string t = "hello";

    int n = s.size();
    int m = t.size();

    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (s[i] == t[j])
        {
            ++i;
            ++j;
        }
        else
        {
            ++i;
        }
    }
    return j == m;
}

int main()
{
    string s;
    cin >> s;

    if (solution(s) == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}