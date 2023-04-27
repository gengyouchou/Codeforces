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

int solution(int n)
{

    // 1, 5, 10, 20, 100
    
    int c100 = n / 100;
    n = n % 100;
    int c20 = n / 20;
    n = n % 20;
    int c10 = n / 10;
    n = n % 10;
    int c5 = n / 5;
    n = n % 5;
    int c1 = n;

    cout << c100 + c20 + c10 + c5 + c1;

    return 0;
}

int main()
{
    int n = 0;
    cin >> n;

    solution(n);

    return 0;
}
