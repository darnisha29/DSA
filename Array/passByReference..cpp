// pass array in fun
// pass by reference
#include <iostream>
using namespace std;

void doubleVal(int brr[], int size)
{
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        brr[i] = brr[i] * 2;
    }
    cout << "In doubleVal function arr Elements After Double  ::" << endl;
    for (int v = 0; v < size; v++)
    {
        cout << brr[v];
        cout << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {5, 6};
    int size = 2;
    cout << "Befor called doubleVal function arr Elements ::" << endl;
    for (int v = 0; v < size; v++)
    {
        cout << arr[v];
        cout << " ";
    }
    // arr reference to base address of arr array
    doubleVal(arr, size);
    cout << endl;

    cout << "After called doubleVal function arr Elements In Main  ::" << endl;
    for (int v = 0; v < size; v++)
    {
        cout << arr[v];
        cout << " ";
    }
    cout << endl;
}