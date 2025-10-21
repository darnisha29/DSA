#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector<int> nums)
{
    int s = 0;
    int e = nums.size() - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (s == e)
        {
            return s;
        }
        if ((mid + 1 <= e) && nums[mid] > nums[mid + 1])
        {
            return mid;
        }
        if ((mid - 1 >= s) && nums[mid - 1] > nums[mid])
        {
            return mid - 1;
        }
        if (nums[s] > nums[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int binearySearch(vector<int> &nums, int s, int e, int target)
{
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (nums[mid] == target)
        {
            return mid;
        }
        if (nums[mid] > target)
        {
            e = mid - 1;
        }
        if (nums[mid] < target)
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int findElement(vector<int> &nums, int PivotIndex, int target)
{
    int ans = 0;
    if (target >= nums[0] && target <= nums[PivotIndex])
    {
        ans = binearySearch(nums, 0, PivotIndex, target);
    }
    else
    {
        ans = binearySearch(nums, PivotIndex + 1, nums.size() - 1, target);
    }
    return ans;
}

int main()
{
    vector<int> nums{1};
    int tartget = 1;

    int PivotIndex = findPivot(nums);

    if (PivotIndex == -1)
    {
        cout << "Issue In Find Pivot " << endl;
    }
    else
    {
        cout << "Pivot  :: " << nums[PivotIndex] << " Found At Index :: " << PivotIndex << endl;
    }

    int targetIndex = findElement(nums, PivotIndex, tartget);

    if (targetIndex == -1)
    {
        cout << "element not found " << endl;
    }
    else
    {
        cout << "Found Element :: " << nums[targetIndex] << " At Index :: " << targetIndex << endl;
    }
}
