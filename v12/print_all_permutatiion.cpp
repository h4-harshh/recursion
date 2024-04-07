#include <bits/stdc++.h>
using namespace std;

void solve(int index, vector<int> &arr, vector<int> &ds, vector<vector<int>> &result, unordered_map<int, bool> mp)
{
    if (ds.size() == arr.size())
    {
        result.push_back(ds);
        return;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (!mp[arr[i]])
        {
            ds.push_back(arr[i]);
            mp[arr[i]] = true;
            solve(i + 1, arr, ds, result, mp);
            mp[arr[i]] = false;
            ds.pop_back();
        }
    }
}
vector<vector<int>> find_permutation(vector<int> arr)
{
    vector<vector<int>> result;
    vector<int> ds;
    unordered_map<int, bool> mp;
    solve(0, arr, ds, result, mp);
    return result;
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> result = find_permutation(arr);
    for (auto temp : result)
    {
        for (auto x : temp)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}