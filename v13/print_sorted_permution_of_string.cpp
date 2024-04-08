// print_sorted_permution_of_string
#include <bits/stdc++.h>
using namespace std;

void solve(int index, string &str, vector<string> &result)
{
    if (index >= str.length())
    {
        result.push_back(str);
        return;
    }
    sort(str.begin() + index, str.end());
    for (int i = index; i < str.length(); i++)
    {
        swap(str[index], str[i]);
        solve(index + 1, str, result);
        swap(str[index], str[i]);
    }
}
vector<string> find_permutation(string &arr)
{
    vector<string> result;

    solve(0, arr, result);
    return result;
}

int main()
{
    string str = "abc";
    vector<string> result = find_permutation(str);
    for (auto temp : result)
    {
        // for (auto x : temp)
        // {
        cout << temp << " ";
        // }
        cout << endl;
    }
    return 0;
}