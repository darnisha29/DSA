#include <limits.h>
#include <iostream>
using namespace std;

int main()
{
    int max = INT_MIN;
    int arr[] = {2, 28, 29, 5, 6, 9, 4, 3, 7, 8, 2};
    int size = 11;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Maximum Number In Array Is ::: ";
    cout << max << endl;
}