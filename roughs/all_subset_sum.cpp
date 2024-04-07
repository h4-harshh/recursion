#include <bits/stdc++.h>
using namespace std;

void all_sum(int index, int sum, vector<int> &arr, priority_queue<int, vector<int>, greater<int>> &pq)
{
    if (index >= arr.size())
    {
        pq.push(sum);
        return;
    }

    all_sum(index + 1, sum, arr, pq);

    // sum += arr[index];
    all_sum(index + 1, sum + arr[index], arr, pq);
    // sum -= arr[index];
}
int main()
{
    // vector<int> arr = {2, 3, 4};
    vector<int> arr = {3, 1, 2};
    priority_queue<int, vector<int>, greater<int>> pq;
    all_sum(0, 0, arr, pq);
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}