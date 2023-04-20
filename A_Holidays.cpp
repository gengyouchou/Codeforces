
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int solution(int days)
{

    int mx = (days / 7) * 2;
    int mn = (days / 7) * 2;

    if (days % 7 == 6)
    {
        mn += 1;
    }

    if (days % 7 <= 1)
    {
        mx += days % 7;
    }
    else
    {
        mx += 2;
    }

    cout << mn << " " << mx << endl;

    return 0;
}

int main()
{
    int n;
    cin >> n;

    solution(n);

    return 0;
}
