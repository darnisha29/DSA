#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr(3, vector<int>(4));
    int rows = 3, cols = 4;

    // Input the 2D vector
    cout << "Enter elements of the 2D vector (3 rows, 4 columns):" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Original 2D vector:" << endl;
    // Display the original 2D vector
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // trasport the vector
    cout << "Transposed 2D vector:" << endl;
    vector<vector<int>> arr2(cols, vector<int>(rows));

    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            arr2[i][j] = arr[j][i];
        }
    }

    // console output
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
}