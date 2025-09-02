#include <iostream>
#include <vector>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        cout << "befor nested if else" << endl;
        if (arr[mid] == target)
        {
            cout << "if matched mid with target" << endl;
            return mid;
        }
        else if (arr[mid] < target)
        {
            cout << " mid less than target" << endl;
            start = mid + 1;
        }
        else
        {
            cout << " mid greater than target" << endl;
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 50};
    int size = 9;
    int target = 45;

    int targetIndex = binarySearch(arr, size, target);

    if (targetIndex == -1)
    {
        cout << "Element not found in the array." << endl;
    }
    else
    {
        cout << "Element found at index: " << targetIndex << endl;
    }

    return 0;
}