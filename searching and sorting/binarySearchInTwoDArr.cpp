#include <iostream>
#include <vector>
using namespace std;

bool SearchElement(int arr[][4], int col, int row, int target)
{

    int s = 0;

    int m = col;
    int n = row;
    int e = (n * m) - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {

        cout << "mid :: " << mid << endl;

        int rowIndex = mid / col;
        int colIndex = mid % col;

        cout << "colIndex :: " << colIndex << endl;
        cout << "rowIndex :: " << rowIndex << endl;

        int element = arr[rowIndex][colIndex];

        if (element == target)
        {
            cout << "element == target" << "element :: " << element << " target :: " << target << endl;
            return true;
        }
        if (element > target)
        {
            cout << "target is small left search :: " << element << endl;
            e = mid - 1;
        }
        else
        {
            cout << "target is greater right search :: " << element << endl;
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
        cout << "cal mid" << mid << endl;
    }
    return false;
};

int main()
{
    int arr[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20}};
    int target = 10;

    cout << SearchElement(arr, 4, 5, target) << endl;
}