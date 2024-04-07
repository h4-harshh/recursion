#include <bits/stdc++.h>
using namespace std;

int find_subsequences(int index, vector<int> &arr, int k, int curr_sum)
{
    if (index >= arr.size())
    {
        if (k == curr_sum)
        {
            return 1;
        }
        return 0;
    }

    int left = find_subsequences(index + 1, arr, k, curr_sum);

    // res.push_back(arr[index]);
    int right = find_subsequences(index + 1, arr, k, curr_sum + arr[index]);
    // res.pop_back();

    return (left + right);
}
int main()
{
    vector<int> arr = {1, 2, 1};
    int k = 2;

    int index = 0;
    cout << find_subsequences(index, arr, k, 0);
    return 0;
}