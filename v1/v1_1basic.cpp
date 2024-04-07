#include <bits/stdc++.h>
using namespace std;

int countt = 0;
void fun()
{
    if (countt == 3)
        return;
    countt++;
    cout << "harsh" << endl;
    fun();
}

int main()
{
    fun();
    return 0;
}