#include <iostream>
#include <vector>
using namespace std;

int SearchTarget(vector<int> arr, int target, int size)
{

    int s = 0;
    int e = size;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (target == arr[mid])
        {
            return mid;
        }
        if (target == arr[mid - 1])
        {
            return mid - 1;
        }
        if (target == arr[mid + 1])
        {
            return mid + 1;
        }
        if (target > mid)
        {
            s = mid + 2;
        }
        else
        {
            e = mid - 2;
        }

        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    vector<int> arr = {10, 3, 40, 20, 50, 80};
    int target = 20;

    int result = SearchTarget(arr, target, arr.size());
    if (result != -1)
    {

        cout << "Found " << target << " at Index :: " << result << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
}
