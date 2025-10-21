#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int bs(vector<int> &nums, int s, int e, int target)
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
int findPairs(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());
    set<pair<int, int>> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        if (bs(nums, i + 1, nums.size(), nums[i] + k) != -1)
        {
            ans.insert({nums[i], nums[i] + k});
        }
    }
    return ans.size();
}

int main()
{
    vector<int> nums{1, 1, 3, 4, 5};
    int k = 2;

    int totalPairs = findPairs(nums, k);
    cout << "Total :: " << totalPairs << " Pairs Found";
}