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

int solution(long long f, long long sum)
{

    long long count = 0;

    // while (sum - f * f >= 0)
    // {
    //     sum = sum - f * f;
    //     ++count;
    // }

    count += sum / (f * f);

    cout << count << endl;

    return 0;
}

int main()
{
    int n = 0;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        long long f = 0;
        long long sum = 0;

        cin >> f >> sum;

        solution(f, sum);
    }

    return 0;
}