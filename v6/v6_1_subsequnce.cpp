// //applying onn numbers
// #include <bits/stdc++.h>
// using namespace std;
// void find_result(int index, vector<int> &arr, vector<int> &res, vector<vector<int>> &result)
// {
//     if (index >= arr.size())
//     {
//         result.push_back(res);
//         return;
//     }

//     find_result(index + 1, arr, res, result);

//     res.push_back(arr[index]);
//     find_result(index + 1, arr, res, result);
//     res.pop_back();
// }

// int main()
// {
//     vector<int> arr = {3, 6, 2};

//     vector<vector<int>> result;
//     vector<int> res;
//     find_result(0, arr, res, result);

//     for (auto it : result)
//     {
//         if (!it.size())
//             cout << "_";
//         for (auto x : it)
//         {
//             cout << x << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// applying onn character array
#include <bits/stdc++.h>
using namespace std;
void find_result(int index, vector<char> &arr, vector<char> &res, vector<vector<char>> &result)
{
    if (index >= arr.size())
    {
        result.push_back(res);
        return;
    }

    find_result(index + 1, arr, res, result);

    res.push_back(arr[index]);
    find_result(index + 1, arr, res, result);
    res.pop_back();
}

int main()
{
    vector<char> arr = {'a', 'b', 'c'};

    vector<vector<char>> result;
    vector<char> res;
    find_result(0, arr, res, result);

    for (auto it : result)
    {
        if (!it.size())
            cout << "_";
        for (auto x : it)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
