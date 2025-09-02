// Missing elements from an array with duplicates.
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int arr[] = {1, 1, 2, 3, 4, 5};

    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        int index = arr[i];
        if (arr[index - 1] > 0)
        {
            arr[index - 1] *= -1;
        }
    }

    //    printing all visited element
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            cout << "Missing element is: " << i + 1 << endl;
            break;
        }
    }
}