
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

int solution(int m, int n)
{

    int h = m;
    int w = n / 2;
    int r = n % 2;

    int ans = h * w;

    if (r > 0)
    {
        ans += m / 2;
    }

    return ans;
}

int main()
{
    int n = 0, m = 0;
    cin >> m >> n;

    cout << max(solution(m, n), solution(n, m));

    return 0;
}