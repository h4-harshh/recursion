// // using two pointer
// #include <bits/stdc++.h>
// using namespace std;

// void rev(vector<int> &v, int l, int r)
// {
//     if (l >= r)
//         return;

//     swap(v[l], v[r]);
//     rev(v, l + 1, r - 1);
// }

// int main()
// {
//     vector<int> v = {5, 4, 8, 7, 3};
//     rev(v, 0, v.size() - 1);
//     for (auto x : v)
//     {
//         cout << x << " ";
//     }
//     return 0;
// }

// one pointer
#include <bits/stdc++.h>
using namespace std;

void rev(vector<int> &v, int index)
{
    if (index >= v.size() / 2)
        return;

    swap(v[index], v[v.size() - index - 1]);

    rev(v, index + 1);
}

int main()
{
    vector<int> v = {5, 4, 7, 3};
    rev(v, 0);
    for (auto x : v)
    {
        cout << x << " ";
    }
    return 0;
}