#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n <= 1)
        return 1;

    return n * fact(n - 1);
}

int main()
{
    cout << fact(6) << endl;
    return 0;
}
