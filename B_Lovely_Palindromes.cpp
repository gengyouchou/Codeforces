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

int main()
{

    string s;

    cin >> s;

    // 11 22 33 44 55 66 77 88 99 1001 1111 1221

    string ans = s;
    reverse(s.begin(), s.end());

    cout << ans + s << endl;

    return 0;
}