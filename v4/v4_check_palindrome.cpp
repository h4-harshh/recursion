#include <bits/stdc++.h>
using namespace std;

// bool check_palin(string str, int i)
// {
//     if (i >= (str.length() / 2))
//         return true;

//     if (str[i] != str[str.length() - 1 - i])
//         return false;

//     check_palin(str, i + 1);
// }

bool check_palin(string str, int l, int h)
{
    if (l >= h)
        return true;

    if (str[l] != str[h])
        return false;
    return check_palin(str, l + 1, h - 1);
}

int main()
{
    string str = "harsh";
    // string str = "nitin";
    // cout << boolalpha << check_palin(str, 0) << endl;
    cout << boolalpha << check_palin(str, 0, str.length() - 1) << endl;
    return 0;
}