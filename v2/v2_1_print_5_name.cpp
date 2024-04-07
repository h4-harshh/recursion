// print name 5 time
#include <bits/stdc++.h>
using namespace std;

void print_name(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << "Harsh" << endl;
    print_name(n - 1);
}

int main()
{
    int count = 5;
    print_name(count);
    return 0;
}