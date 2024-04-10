#include <bits/stdc++.h>
using namespace std;

void solve(int i, int j, vector<vector<int>> &m, int n, vector<string> &ans, string str, vector<vector<int>> &vis)
{
    if (i == n - 1 && j == n - 1)
    {
        ans.push_back(str);
        return;
    }

    // Down
    if (i + 1 < n && !vis[i + 1][j] && m[i + 1][j] == 1)
    {
        vis[i][j] = 1;
        solve(i + 1, j, m, n, ans, str + 'D', vis);
        vis[i][j] = 0;
    }

    // left
    if (j - 1 >= 0 && !vis[i][j - 1] && m[i][j - 1] == 1)
    {
        vis[i][j] = 1;
        solve(i, j - 1, m, n, ans, str + 'L', vis);
        vis[i][j] = 0;
    }

    // right
    if (j + 1 < n && !vis[i][j + 1] && m[i][j + 1] == 1)
    {
        vis[i][j] = 1;
        solve(i, j + 1, m, n, ans, str + 'R', vis);
        vis[i][j] = 0;
    }

    // Up
    if (i - 1 >= 0 && !vis[i - 1][j] && m[i - 1][j] == 1)
    {
        vis[i][j] = 1;
        solve(i - 1, j, m, n, ans, str + 'U', vis);
        vis[i][j] = 0;
    }
}

vector<string> findPath(vector<vector<int>> &m, int n)
{
    vector<string> ans;
    vector<vector<int>> vis(n, vector<int>(n, 0));
    if (m[0][0] == 1)
        solve(0, 0, m, n, ans, "", vis);
    return ans;
}

//{ Driver Code Starts.

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
// } Driver Code Ends