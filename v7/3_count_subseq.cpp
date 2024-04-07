#include <bits/stdc++.h>
using namespace std;

// int find_subsequences(int idx, vector<int> &arr, int k, int sum)
// {
//     if (idx >= arr.size())
//     {
//         if (sum == k)
//         {
//             return 1;
//         }
//         return 0;
//     }

//     int l = find_subsequences(idx + 1, arr, k, sum);

//     sum += arr[idx];
//     int r = find_subsequences(idx + 1, arr, k, sum);
//     sum -= arr[idx];

//     return l + r;
// }

int find_subsequences(int index, vector<int> &arr, int k, int sum)
{
    if (index >= arr.size())
    {
        if (sum == k)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int l = find_subsequences(index + 1, arr, k, sum);

    sum += arr[index];
    int r = find_subsequences(index + 1, arr, k, sum);
    sum -= arr[index];

    return l + r;
}

int main()
{
    vector<int> arr = {1, 2, 1};
    int k = 2;

    int index = 0;
    cout << find_subsequences(index, arr, k, 0);
    return 0;
}