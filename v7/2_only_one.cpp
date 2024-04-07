// // follow up of previous we have to print only one  subsequence this time
// // this approach is used for all places where we want to get only one subsequence

// #include <bits/stdc++.h>
// using namespace std;

// // bool find_subsequences(int idx, vector<int> &arr, vector<int> &res, int k, int sum)
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
// //             return true;
// //         }
// //         return false;
// //     }

// //     if (find_subsequences(idx + 1, arr, res, k, sum))
// //         return true;

// //     res.push_back(arr[idx]);
// //     sum += arr[idx];
// //     if (find_subsequences(idx + 1, arr, res, k, sum))
// //         return true;
// //     sum -= arr[idx];
// //     res.pop_back();

// //     return false;
// // }

// bool find_subsequences(int idx, vector<int> &arr, vector<int> &res, int k, int sum)
// {
//     if (idx >= arr.size())
//     {
//         if (sum == k)
//         {
//             for (auto x : res)
//             {
//                 cout << x << " ";
//             }
//             cout << endl;
//             return true;
//         }
//         return false;
//     }

//     if (find_subsequences(idx + 1, arr, res, k, sum))
//     {
//         return true;
//     };

//     res.push_back(arr[idx]);
//     sum += arr[idx];
//     if (find_subsequences(idx + 1, arr, res, k, sum))
//     {
//         return true;
//     };
//     sum -= arr[idx];
//     res.pop_back();

//     return false;
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

// follow up of previous we have to print only one  subsequence this time
// this approach is used for all places where we want to get only one subsequence

#include <bits/stdc++.h>
using namespace std;

bool find_subsequences(int index, vector<int> &arr, vector<int> &res, int k, int curr_sum)
{
    if (index >= arr.size())
    {
        if (k == curr_sum)
        {
            return true;
        }
        return false;
    }

    res.push_back(arr[index]);
    if (find_subsequences(index + 1, arr, res, k, curr_sum + arr[index]))
        return true;
    res.pop_back();

    if (find_subsequences(index + 1, arr, res, k, curr_sum))
        return true;

    return false;
}

int main()
{
    vector<int> arr = {1, 2, 1};
    int k = 2;
    vector<int> res;
    int index = 0;
    if (find_subsequences(index, arr, res, k, 0))
    {
        for (auto x : res)
        {
            cout << x << " ";
        }
    }
    return 0;
}