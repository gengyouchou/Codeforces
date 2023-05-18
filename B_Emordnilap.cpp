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
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {

        long long n = 0;

        cin >> n;

        long long M = 1e9 + 7;
        long long ans = n * (n - 1);

        for (int i = 1; i <= n; ++i)
        {
            ans *= i;
            ans %= M;
        }

        cout << ans % M;

        cout << endl;
    }

    return 0;
}

// //  1 2 3 | {3 2 1}
//       2          1
//         3      2 1
//              3 2 1
//                2 1

// // //  3 2 1 | 1 2 3
//        3 2 1   1 2
//          2 1   1

// //   3 2
// //   3 1
// //   2 1
//       3     0

//     2 3 1 | 1 3 2

//     2 1     1
//       3 1   1   2
//               3 2

//     2 1 3 | 3 1 2
