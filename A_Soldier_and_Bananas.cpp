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

long long solution(int k, int n, int w)
{

    long long total = 0;

    for (int i = 1; i <= w; ++i)
    {
        total += k * i;
    }

    // cout<<total<<endl;

    long long borrow = total - n;

    return borrow < 0 ? 0 : borrow;
}

int main()
{
    int n = 0, k = 0, w = 0;
    cin >> k >> n >> w;

    // cout<<k<<","<<n<<","<<w<<endl;

    cout << solution(k, n, w) << endl;

    return 0;
}