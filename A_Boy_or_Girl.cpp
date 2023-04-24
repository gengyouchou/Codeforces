
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

int solution(string &s)
{

    unordered_map<char, int> m;

    for (char &c : s)
    {
        ++m[c];
    }

    int n = m.size();

    if (n % 2 == 0)
    {
        cout << "CHAT WITH HER !";
    }
    else
    {
        cout << "IGNORE HIM!";
    }

    return 0;
}

int main()
{
    string s = "";
    cin >> s;

    solution(s);

    return 0;
}