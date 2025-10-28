#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

// class Solution
// {
// public:
//     vector<int> twoPointer(vector<int> arr, int k, int x)
//     {
//         int l = 0;
//         int h = arr.size() - 1;

//         while ((h - l + 1) > k)
//         {
//             if (abs(x - arr[l]) > abs(arr[h] - x))
//             {
//                 l++;
//             }
//             else
//             {
//                 h--;
//             }
//         }
//         return vector<int>(arr.begin() + l, arr.begin() + h + 1);
//     }

//     vector<int> findClosestElements(vector<int> &arr, int k, int x)
//     {
//         return twoPointer(arr, k, x);
//     }
// };

int lowerBound(vector<int> arr, int x)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    int ans = e;

    while (s <= e)
    {
        if (arr[mid] >= x)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (x > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

vector<int> bs_method(vector<int> arr, int x, int k)
{
    int h = lowerBound(arr, x);
    int l = h - 1;
    while (k--)
    {
        if (l < 0)
        {
            h++;
        }
        else if (h > arr.size() - 1)
        {
            l--;
        }
        else if (x - arr[l] > arr[h] - x)
        {
            h++;
        }
        else
        {
            l--;
        }
    }
    return vector<int>(arr.begin() + l + 1, arr.begin() + h);
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    int x = 6;
    int k = 2;
    vector<int> result = bs_method(arr, x, k);
    for (auto i : result)
    {
    }
}