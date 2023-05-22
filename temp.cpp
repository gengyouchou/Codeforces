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

int solution(long long n)
{

    return 0;
}

int main()
{
    long long n = 0;
    cin >> n;

    solution(n);

    return 0;
}

using namespace std;

vector<int> solution(vector<int> &nums)
{
    int n = nums.size();

    for (int i = 0; i < n; ++i)
    {
        if (nums[i] == 1)
        {
            nums[i] += 1;
        }
    }

    for (int i = 0; i < n - 1; ++i)
    {

        if (nums[i + 1] % nums[i] == 0)
        {
            nums[i + 1] += 1;
        }
    }

    // for (int i = n - 1; i >= 1; --i)
    // {
    //     if (nums[i] % nums[i - 1] == 0)
    //     {
    //         nums[i - 1] += 1;
    //     }
    // }

    return nums;
}

int main()
{
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {

        int n = 0;

        cin >> n;

        vector<int> nums(n, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i];
        }

        vector<int> ans = solution(nums);

        for (int i = 0; i < n; ++i)
        {
            cout << ans[i] << " ";
        }

        cout << endl;
    }

    return 0;
}

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

    int n = 0;

    cin >> n;

    vector<int> nums(n, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    cout << endl;

    return 0;
}

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

bool solve()
{
    int n = 0, k = 0;

    cin >> n >> k;

    string s = "";
    cin >> s;

    unordered_map<char, int> m;

    for (char &c : s)
    {
        ++m[c];
    }

    for (auto [val, freq] : m)
    {
        if (freq > k)
        {
            return false;
        }
    }

    return true;
}

int main()
{

    if (solve())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    cout << endl;

    return 0;
}
