
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

int solution(int a, int b, int c)
{
    return max((a + b) * c,
               max(a * (b + c),
                   max(a + b + c, a * b * c)));
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << solution(a, b, c);

    return 0;
}