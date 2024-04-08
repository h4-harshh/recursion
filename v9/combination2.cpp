// combination sum 2
// pick one element only once at a time

#include <bits/stdc++.h>
using namespace std;

void combinations(int index, vector<int> &arr, int target, vector<int> &ds, vector<vector<int>> &result)
{

    if (target == 0)
    {

        result.push_back(ds);
        return;
    }

    for (int i = index; i < arr.size(); i++)
    {
        if (i != index && arr[i] == arr[i - 1])
            continue;

        if (arr[i] > target)
            break;

        ds.push_back(arr[i]);
        combinations(i + 1, arr, target - arr[i], ds, result);
        ds.pop_back();
    }
}
vector<vector<int>> find_combinations(vector<int> arr, int target)
{
    vector<int> ds;
    vector<vector<int>> result;
    combinations(0, arr, target, ds, result);
    return result;
}
int main()
{
    vector<int> arr = {1, 1, 1, 2, 2};
    int target = 4;
    vector<vector<int>> res = find_combinations(arr, target);
    for (auto x : res)
    {
        for (auto temp : x)
        {
            cout << temp << " ";
        }
        cout << endl;
    }
    return 0;
}