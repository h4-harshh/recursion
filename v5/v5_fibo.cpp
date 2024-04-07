// fibonacci
#include <bits/stdc++.h>
using namespace std;

// int fib(int n)
// {
//     if (n <= 1)
//     {
//         return n;
//     }
//     int last = fib(n - 1);
//     int sec_last = fib(n - 2);
//     return last + sec_last;
//     // return fib(n - 1) + fib(n - 2);
// }

int fib(int n)
{
    if (n == 0)
        return n;
    if (n == 1)
        return n;

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}