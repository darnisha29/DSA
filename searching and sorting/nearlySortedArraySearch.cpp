#include <iostream>
#include <vector>
using namespace std;

int Search(vector<int> arr, int target)
{
    int s = 0;
    int e = arr.size();
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[mid + 1] == target)
        {
            return mid + 1;
        }
        if (arr[mid - 1] == target)
        {
            return mid - 1;
        }
        if (arr[mid] < target)
        {
            s = mid + 2;
        }
        if (arr[mid] > target)
        {
            e = mid - 2;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    vector<int> arr{10, 3, 40, 20, 50, 70, 60, 80};

    int target = 10;

    int result = Search(arr, target);

    if (result != -1)
    {
        cout << "Found target " << arr[result] << " at Index :: " << result << endl;
    }
    else
    {
        cout << "Target Not Found" << endl;
    }

    return 0;
}