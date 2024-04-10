#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &nums, int low, int high)
{
    int pivot = nums[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (i <= high - 1 && nums[i] <= pivot)
        {
            i++;
        }
        while (j >= low + 1 && nums[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(nums[i], nums[j]);
        }
    }
    swap(nums[low], nums[j]);

    return j;
}

void quick_sort(vector<int> &nums, int low, int high)
{
    if (low < high)
    {
        int partition_index = partition(nums, low, high);
        quick_sort(nums, low, partition_index - 1);
        quick_sort(nums, partition_index + 1, high);
    }
}

vector<int> sortArray(vector<int> &nums)
{
    quick_sort(nums, 0, nums.size() - 1);
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
