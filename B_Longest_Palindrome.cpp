
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

int solution(vector<string> &s)
{

    int n = s.size();

    unordered_map<string, int> m;

    for (int i = 0; i < n; ++i)
    {
        ++m[s[i]];
    }

    string res = "";
    bool flag = false;

    for (string &str : s)
    {

        string revStr = str;
        reverse(revStr.begin(), revStr.end());

        if (revStr != str && m[str] > 0 && m[revStr] > 0)
        {

            --m[str];
            --m[revStr];

            res.insert(0, str);
            res.insert(res.size(), revStr);
        }
        else if (str == revStr && m[str] > 1)
        {
            res.insert(0, str);
            res.insert(res.size(), str);
        }
        else if (str == revStr && m[str] > 0 && flag == false)
        {
            res.insert(res.size() / 2, str);
            flag = true;
        }
    }

    cout << res.size() << endl;

    if (res.size() > 0)
    {
        cout << res << endl;
    }

    return 0;
}

int main()
{
    int n = 0, m = 0;
    cin >> n >> m;

    vector<string> s(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> s[i];
    }

    solution(s);

    return 0;
}
