// print n to 1
#include <bits/stdc++.h>
using namespace std;

void print_n_1(int n)
{
    if (n == 0)
        return;

    cout << n << endl;
    print_n_1(n - 1);
}

int main()
{
    int n = 9;
    print_n_1(n);
    return 0;
}