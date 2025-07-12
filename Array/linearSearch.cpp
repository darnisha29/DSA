#include <iostream>
using namespace std;

bool find(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int arr[] = {2, 4, 8, 10, 6};
    int size = 5;
    int key;

    cout << "Enter Key you want to check  :: " << endl;
    cin >> key;

    if (find(arr, size, key))
    {
        cout << "key found in array";
    }
    else
    {
        cout << "key found in array";
    }
}