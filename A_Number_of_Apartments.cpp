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

bool flag = false;
void dfs(int n, map<int, int> visited)
{
    if (n == 0)
    {
        for (auto [val, freq] : visited)
        {
            cout << freq << " ";
        }

        flag = true;
        return;
    }

    if (n < 0 || flag == true)
    {
        return;
    }

    ++visited[3];
    dfs(n - 3, visited);

    --visited[3];
    ++visited[5];
    dfs(n - 5, visited);

    --visited[5];
    ++visited[7];
    dfs(n - 7, visited);
}

int main()
{
    int t;
    cin >> t;

    for (int c = 0; c < t; ++c)
    {

        int n = 0;

        cin >> n;

        // 3 5 7
        flag = false;
        map<int, int> visited;
        visited[3] = 0;
        visited[5] = 0;
        visited[7] = 0;

        dfs(n, visited);

        if (flag == false)
        {
            cout << -1;
        }
        cout << endl;
    }

    return 0;
}
