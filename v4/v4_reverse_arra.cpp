// #include <bits/stdc++.h>
// using namespace std;
// void rev(vector<int> &v, int l, int h)
// {
//     if (l >= h)
//         return;
//     swap(v[l], v[h]);
//     rev(v, l + 1, h - 1);
// }

// int main()
// {
//     vector<int> v = {5, 4, 7, 3};
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

void rev(vector<int> &v, int i)
{
    if (i >= (v.size() / 2))
        return;

    swap(v[i], v[v.size() - i - 1]);

    rev(v, i + 1);
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