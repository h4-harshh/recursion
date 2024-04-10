#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void merge_sort(vector<int> &nums, int low, int high)
{
    if (low >= high)
        return;

    int mid = (low + high) / 2;
    merge_sort(nums, low, mid);
    merge_sort(nums, mid + 1, high);
    merge(nums, low, mid, high);
}

vector<int> sortArray(vector<int> &nums)
{
    merge_sort(nums, 0, nums.size() - 1);
    return nums;
}

int main()
{
    vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

    cout << "Original array:" << endl;
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    nums = sortArray(nums);

    cout << "Sorted array:" << endl;
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
