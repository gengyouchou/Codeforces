#include <algorithm>
#include <functional> // std::minus
#include <iostream>
#include <map>
#include <math.h>
#include <numeric> // std::accumulate
#include <set>
#include <stack>
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

    int n = s.size();

    cout << (n + 1) * 26 - n;

    cout << endl;

    return 0;
}
