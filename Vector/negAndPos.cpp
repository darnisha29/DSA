// place all negative numbers in one side and positive numbers in another side
#include <iostream>
#include <vector>
using namespace std;

// suffle
int main()
{
    vector<int> nums = {1, 2, 5, -1, 4, 5, 0, -4, -5};
    int n = nums.size();
    int l = 0, h = n - 1;

    while (l < h)
    {
        if (nums[l] < 0)
        {
            l++;
        }
        else if (nums[h] >= 0)
        {
            h--;
        }
        else
        {
            swap(nums[l], nums[h]);
        }
    }

    // while (l <= h)
    // {
    //     if (nums[l] < 0 && nums[h] < 0)
    //     {
    //         l++;
    //     }
    //     else if (nums[l] >= 0 && nums[h] >= 0)
    //     {
    //         h--;
    //     }
    //     else if (nums[l] >= 0 && nums[h] < 0)
    //     {
    //         swap(nums[l], nums[h]);
    //         l++;
    //         h--;
    //     }
    //     else
    //     {
    //         l++;
    //         h--;
    //     }
    // }

    cout << "Rearranged vector: ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

// int main()
// {
//     vector<int> nums = {1, 2, 5, -1, 4, 5, 0, -4, -5};
//     int n = nums.size();
//     int j = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (nums[i] < 0)
//         {
//             swap(nums[i], nums[j]);
//             j++;
//         }
//     }

//     cout << "Rearranged vector: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << nums[i] << " ";
//     }
// }