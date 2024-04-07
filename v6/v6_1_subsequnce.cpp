// print all subsequences of an array
#include <bits/stdc++.h>
using namespace std;

void find_subsequence(int index, vector<int> arr, vector<int> &res)
{
    if (index >= arr.size())
    {
        for (auto x : res)
        {
            cout << x << " ";
        }
        cout << endl;
        return;
    }
    // without taking the element
    find_subsequence(index + 1, arr, res);

    // with taking the element
    res.push_back(arr[index]);
    find_subsequence(index + 1, arr, res);
    res.pop_back();
}

int main()
{
    vector<int> arr = {3, 6, 2};
    vector<int> res;
    find_subsequence(0, arr, res);
    return 0;
}
