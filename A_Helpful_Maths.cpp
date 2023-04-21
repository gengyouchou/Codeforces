
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <math.h>
#include <stdio.h>

using namespace std;

int solution(string &s)
{
    sort(s.begin(), s.end(),
         [&](char &c1, char &c2)
         {
             return c1 < c2;
         });

    string ans = "";

    for (char &c : s)
    {

        if (c == '+')
            continue;
        ans.insert(ans.end(), c);
        ans.insert(ans.end(), '+');
    }

    cout << ans.substr(0, ans.size()-1);

    return 0;
}

int main()
{
    string s;
    cin >> s;

    solution(s);

    return 0;
}