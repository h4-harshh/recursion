// // find all subsequences with sum equals to k
// #include <bits/stdc++.h>
// using namespace std;

// // void find_subsequences(int idx, vector<int> &arr, vector<int> &res, int k, int sum)
// // {
// //     if (idx >= arr.size())
// //     {
// //         if (sum == k)
// //         {
// //             for (auto x : res)
// //             {
// //                 cout << x << " ";
// //             }
// //             cout << endl;
// //         }
// //         return;
// //     }

// //     find_subsequences(idx + 1, arr, res, k, sum);

// //     res.push_back(arr[idx]);
// //     sum += arr[idx];
// //     find_subsequences(idx + 1, arr, res, k, sum);
// //     sum -= arr[idx];
// //     res.pop_back();
// // }

// void find_subsequences(int index, vector<int> &arr, vector<int> &res, int k, int curr_sum)
// {
//     if (index >= arr.size())
//     {
//         if (k == curr_sum)
//         {
//             for (auto x : res)
//             {
//                 cout << x << " ";
//             }
//             cout << endl;
//         }
//         return;
//     }

//     find_subsequences(index + 1, arr, res, k, curr_sum);

//     res.push_back(arr[index]);
//     find_subsequences(index + 1, arr, res, k, curr_sum + arr[index]);
//     res.pop_back();
// }

// int main()
// {
//     vector<int> arr = {1, 2, 1};
//     int k = 2;
//     vector<int> res;
//     int index = 0;
//     find_subsequences(index, arr, res, k, 0);
//     return 0;
// }

// addition(not preferred by me)

// find all subsequences with sum equals to k
#include <bits/stdc++.h>
using namespace std;

void find_subsequences(int index, vector<int> &arr, vector<int> &res, int k)
{
    if (k < 0)
        return;
    if (index >= arr.size())
    {
        if (k == 0)
        {
            for (auto x : res)
            {
                cout << x << " ";
            }
            cout << endl;
        }
        return;
    }

    find_subsequences(index + 1, arr, res, k);

    res.push_back(arr[index]);
    find_subsequences(index + 1, arr, res, k - arr[index]);
    cout << "." << k;
    res.pop_back();
}

int main()
{
    vector<int> arr = {1, 2, 1};
    int k = 2;
    vector<int> res;
    int index = 0;
    find_subsequences(index, arr, res, k);
    return 0;
}