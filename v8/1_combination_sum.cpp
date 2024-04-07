#include <bits/stdc++.h>
using namespace std;

void combination_sum(vector<int> v, int target, vector<int> &res, int index)
{

    if (index == v.size())
    {
        if (target == 0)
        {
            for (auto x : res)
            {
                cout << x << " ";
            }
            cout << endl;
        }
        return;
    }
    // function call without picking
    combination_sum(v, target, res, index + 1);

    // function call with picking
    if (v[index] <= target)
    {
        res.push_back(v[index]);
        target -= v[index];
        combination_sum(v, target, res, index);
        target += v[index];
        res.pop_back();
    }
}
int main()
{
    vector<int> v = {2, 3, 6, 7};
    int target = 7;
    vector<int> res;
    int curr_index = 0;
    combination_sum(v, target, res, curr_index);
    return 0;
}