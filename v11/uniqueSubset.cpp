#include <bits/stdc++.h>
using namespace std;

void solve(int index, vector<int> &arr, vector<int> &res, vector<vector<int>> &result)
{
    result.push_back(res);
    for (int i = index; i < arr.size(); i++)
    {
        if (i != index && arr[i] == arr[i - 1])
            continue;

        res.push_back(arr[i]);
        solve(i + 1, arr, res, result);
        res.pop_back();
    }
}

vector<vector<int>> find_subset(vector<int> arr)
{
    vector<vector<int>> result;
    vector<int> res;
    sort(arr.begin(), arr.end());
    solve(0, arr, res, result);
    return result;
}
int main()
{
    // vector<int> arr = {1, 2, 2, 2, 3, 3};
    vector<int> arr = {1, 2, 2};
    vector<vector<int>> res = find_subset(arr);
    for (auto x : res)
    {
        for (auto it : x)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}