#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int solution(int left, int right, int k, vector<int> &prices)
{
    sort(prices.begin(), prices.end());

    int n = prices.size();

    auto iter = lower_bound(prices.begin(), prices.end(), left);

    int r = iter - prices.begin();

    int ans = 0;

    for (int i = r; i < n; ++i)
    {

        if (prices[i] <= right && k - prices[i] >= 0)
        {
            k = k - prices[i];
            ++ans;
        }
        else
        {
            break;
        }
    }

    cout << ans << endl;

    return 0;
}

int main()
{
    int n;
    cin >> n;

    for (int c = 0; c < n; ++c)
    {
        vector<int> nums(n);
        int left = 0, right = 0;
        int k = 0;
        int len = 0;

        cin >> len;

        cin >> left >> right;
        cin >> k;

        vector<int> prices(len, 0);

        for (int i = 0; i < len; ++i)
        {
            int num = 0;

            cin >> num;
            prices[i] = num;
        }

        solution(left, right, k, prices);
    }

    return 0;
}
