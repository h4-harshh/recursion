// 1-n backtracking
#include <bits/stdc++.h>
using namespace std;

void fun(int n)
{
    if (n == 0)
        return;

    fun(n - 1);
    cout << n << endl;
}
int main()
{
    int n = 5;
    // cin >> n;
    fun(n);
    return 0;
}