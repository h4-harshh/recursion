#include <bits/stdc++.h>
using namespace std;

// void function2(int n, int &k)
// {
//     if (k > n)
//         return;
//     cout << k;
//     k++;
//     function2(n, k);
// }
// void fun(int n)
// {
//     int k = 1;
//     function2(n, k);
// }

void print_upto_n(int i, int n)
{
    if (i > n)
        return;
    cout << i << endl;
    print_upto_n(i + 1, n);
}

int main()
{
    int n = 9;
    print_upto_n(1, n);
    return 0;
}