#include <bits/stdc++.h>
using namespace std;

void solve(int i, int j, vector<vector<int>> &m, int n, vector<string> &ans, string str, vector<vector<int>> &vis, int di[], int dj[])
{
    if (i == n - 1 && j == n - 1)
    {
        ans.push_back(str);
        return;
    }
    string move = "DLRU";
    for (int ind = 0; ind < 4; ind++)
    {
        int nexti = i + di[ind];
        int nextj = j + dj[ind];
        if (nexti >= 0 && nexti < n && nextj >= 0 && nextj < n && !vis[nexti][nextj] && m[nexti][nextj] == 1)
        {
            vis[i][j] = 1;
            solve(nexti, nextj, m, n, ans, str + move[ind], vis, di, dj);
            vis[i][j] = 0;
        }
    }
}
vector<string> findPath(vector<vector<int>> &m, int n)
{
    vector<string> ans;
    vector<vector<int>> vis(n, vector<int>(n, 0));
    int di[] = {+1, 0, 0, -1};
    int dj[] = {0, -1, 1, 0};
    if (m[0][0] == 1)
        solve(0, 0, m, n, ans, "", vis, di, dj);
    return ans;
}

int main()
{
    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        int n;
        // cin >> n;
        n = 4;
        vector<vector<int>> m = {{1, 0, 0, 0},
                                 {1, 1, 0, 1},
                                 {1, 1, 0, 0},
                                 {0, 1, 1, 1}};
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         cin >> m[i][j];
        //     }
        // }

        vector<string> result = findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}