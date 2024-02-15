#include <cstring>
#include <cstdio>
#include <cmath>
#include <cassert>
#include <set>
#include <map>
#include <array>
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
#include <unordered_set>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;

#define mp make_pair
#define pb push_back
#define F first
#define S second
#define ab(x) (((x) < 0) ? -(x) : (x))

void solve()
{
    int n, k;
    cin >> n >> k;

    string s;

    cin >> s;

    int i = 0;

    while (i < n && k > 0)
    {
        if (s[i] >= '1')
        {

            if (n > 1 && i == 0 && s[i] > '1')
            {
                s[i] = '1';
                --k;
            }
            else if (n == 1)
            {
                s[i] = '0';
                --k;
            }
            else if (i > 0)
            {
                s[i] = '0';
                --k;
            }
        }

        ++i;
    }

    cout << s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();

    cout << endl;
}