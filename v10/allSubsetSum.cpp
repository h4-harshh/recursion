// all subset sum in increasing orderrrrrr
#include <bits/stdc++.h>
using namespace std;

void all_sum(int index, int sum, vector<int> &arr, vector<int> &result)
{
    if (index >= arr.size())
    {
        result.push_back(sum);
        return;
    }

    all_sum(index + 1, sum, arr, result);

    all_sum(index + 1, sum + arr[index], arr, result);
}
int main()
{
    vector<int> arr = {2, 3, 4};
    // vector<int> arr = {3, 1, 2};
    vector<int> result;
    all_sum(0, 0, arr, result);
    sort(result.begin(), result.end());
    for (auto x : result)
    {
        cout << x << " ";
    }
    return 0;
}