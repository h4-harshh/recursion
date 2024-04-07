#include <bits/stdc++.h>
using namespace std;

void solve(int index, vector<int> &arr, vector<vector<int>> &result)
{
    if (index >= arr.size())
    {
        result.push_back(arr);
        return;
    }

    for (int i = index; i < arr.size(); i++)
    {
        swap(arr[index], arr[i]);
        solve(index + 1, arr, result);
        swap(arr[index], arr[i]);
    }
}
vector<vector<int>> find_permutation(vector<int> arr)
{
    vector<vector<int>> result;

    solve(0, arr, result);
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