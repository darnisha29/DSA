#include <vector>
#include <stdlib.h>
using namespace std;

class Solution
{
public:
    vector<int> twoPointer(vector<int> arr, int k, int x)
    {
        int l = 0;
        int h = arr.size() - 1;

        while ((h - l + 1) > k)
        {
            if (abs(x - arr[l]) > abs(arr[h] - x))
            {
                l++;
            }
            else
            {
                h--;
            }
        }
        return vector<int>(arr.begin() + l, arr.begin() + h + 1);
    }

    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {
        return twoPointer(arr, k, x);
    }
};