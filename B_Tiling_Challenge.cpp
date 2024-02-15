#include <cstring>
#include <cstdio>
#include <cmath>
#include <cassert>
#include <set>
#include <map>
#include <array>
#include <stack>
#include <queue>
#include <vector>
#include <numeric>
#include <iostream>
#include <algorithm>
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

bool solve()
{
    int n;
    cin >> n;
    vector<string> vec(n);
    for (auto &x : vec)
    {
        cin >> x;
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (vec[i][j] == '.')
            {
                if (j - 1 < 0 || j + 1 >= n || i + 1 >= n || i + 2 >= n)
                {
                    return false;
                }

                if (vec[i + 1][j - 1] == '.' && vec[i + 1][j] == '.' && vec[i + 1][j + 1] == '.' && vec[i + 2][j] == '.')
                {
                    vec[i + 1][j - 1] = '#';
                    vec[i + 1][j] = '#';
                    vec[i + 1][j + 1] = '#';
                    vec[i + 2][j] = '#';
                }
                else
                {
                    return false;
                }
            }
        }
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    if (solve())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    cout << endl;
}