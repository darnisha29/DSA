#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    // Example 1:sort
    int arr[] = {1, 2, 4, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    // sort(arr, arr + n);

    // for (int i = 0; i < n - 1; i++)
    // {
    //     if (arr[i] == arr[i + 1])
    //     {
    //         cout << "Duplicate element found: " << arr[i] << endl;
    //         return 0; // Exit after finding the first duplicate
    //     }
    // }
    // cout << "No duplicate elements found." << endl;
    // return 0;

    // int arr[] = {1, 2, 3, 4, 3};

    // mark negative elements
    // for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    // {
    //     int index = abs(arr[i]);
    //     if (arr[index] < 0)
    //     {
    //         int ans = index;
    //         cout << "Duplicate element found: " << ans << endl;
    //         break;
    //     }
    //     else
    //     {
    //         arr[index] *= -1;
    //     }
    // }
    // return 0;

    while (arr[0] != arr[arr[0]])
    {
        swap(arr[0], arr[arr[0]]);
    }
    cout << "Duplicate element found: " << arr[0] << endl;
    return 0;
}