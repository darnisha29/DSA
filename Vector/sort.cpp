#include <iostream>
#include <vector>
using namespace std;

// in place // sort 0s, 1s, and 2s in a vector
void sort012(vector<int> &nums)
{
    int low = 0, mid = 0, high = nums.size() - 1;

    while (mid <= high)
    {
        switch (nums[mid])
        {
        case 0:
            swap(nums[low++], nums[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(nums[mid], nums[high--]);
            break;
        }
    }
}
// Example usage
int main()
{
    vector<int> nums = {2, 0, 1, 2, 1, 0};
    sort012(nums);
    cout << "Sorted array: ";
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}

// Alternative approach using counting sort
// int main()
// {
//     vector<int> nums = {1, 2, 0, 2, 1, 0, 1, 1, 0, 0};
//     int zeros, ones, twos;
//     zeros = ones = twos = 0;

//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] == 0)
//         {
//             zeros++;
//         }
//         else if (nums[i] == 1)
//         {
//             ones++;
//         }
//         else
//         {
//             twos++;
//         }
//     }

//     for (int i = 0; i < zeros; i++)
//     {
//         nums[i] = 0;
//     }
//     for (int i = zeros; i < zeros + ones; i++)
//     {
//         nums[i] = 1;
//     }
//     for (int i = zeros + ones; i < nums.size(); i++)
//     {
//         nums[i] = 2;
//     }
//     cout << "Sorted array: ";
//     for (int i = 0; i < nums.size(); i++)
//     {
//         cout << nums[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }