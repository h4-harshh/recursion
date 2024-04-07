// find all subsequences with sum equals to k
#include <bits/stdc++.h>
using namespace std;

void find_subsequences(int idx, vector<int> &arr, vector<int> &res, int k, int sum)
{
    if (idx >= arr.size())
    {
        if (sum == k)
        {
            for (auto x : res)
            {
                cout << x << " ";
            }
            cout << endl;
        }
        return;
    }

    find_subsequences(idx + 1, arr, res, k, sum);

    res.push_back(arr[idx]);
    sum += arr[idx];
    find_subsequences(idx + 1, arr, res, k, sum);
    sum -= arr[idx];
    res.pop_back();
}

int main()
{
    vector<int> arr = {1, 2, 1};
    int k = 2;
    vector<int> res;
    int index = 0;
    find_subsequences(index, arr, res, k, 0);
    return 0;
}