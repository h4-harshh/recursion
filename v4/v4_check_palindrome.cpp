// palindrom check using 2 pointer
#include <bits/stdc++.h>
using namespace std;

bool check_palin(string str, int index)
{
    if (index >= str.length() / 2)
        return true;

    if (str[index] != str[str.length() - 1 - index])
        return false;

    return check_palin(str, index + 1);
}

int main()
{
    // string str = "harsh";
    string str = "nitin";
    // cout << boolalpha << check_palin(str, 0) << endl;
    cout << boolalpha << check_palin(str, 0) << endl;
    return 0;
}

// // palindrom check using 1 pointer
// #include <bits/stdc++.h>
// using namespace std;

// bool check_palin(string str, int l, int r)
// {
//     if (l >= r)
//         return true;

//     if (str[l] != str[r])
//         return false;

//     return check_palin(str, l + 1, r - 1);
// }

// int main()
// {
//     string str = "harsh";
//     // string str = "nitin";
//     // cout << boolalpha << check_palin(str, 0) << endl;
//     cout << boolalpha << check_palin(str, 0, str.length() - 1) << endl;
//     return 0;
// }