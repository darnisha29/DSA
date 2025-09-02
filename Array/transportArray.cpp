#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[3][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12}};
    int arr2[4][3];

    int rows = 3, cols = 4;

    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            arr2[i][j] = arr[j][i];
        }
    }

    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}