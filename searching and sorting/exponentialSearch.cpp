#include <iostream>
#include <vector>
using namespace std;
int bs(vector<int> &arr, int i, int j, int target)
{
    int s = i;
    int e = j;
    int mid = s + (e - s) / 2;
    while (s <= e)

    {
        cout << arr[mid] << endl;
        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[mid] > target)
        {
            e = mid - 1;
        }
        if (arr[mid] < target)
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int exp(vector<int> &arr, int target)

{
    int n = arr.size();
    cout << n << endl;
    int i = 0;
    int j = 1;
    if (arr[i] == target)
    {
        return i;
    }
    while (j < n && arr[j] < target)
    {
        i = j;
        j = j * 2;
    }
    return bs(arr, i, min(j, n), target);
}

int main()
{
    vector<int> arr{1, 2, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 16, 17, 18, 19, 20, 29, 30};
    int target = 30;

    int result = exp(arr, target);

    if (result != -1)
    {
        cout << "Target Found at Index :: " << result << endl;
    }
    else
    {
        cout << "Target not Found" << endl;
    }
    return 0;
}