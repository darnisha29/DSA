#include <iostream>
using namespace std;

int main()
{

    int countOne = 0;
    int countZero = 0;
    int arr[] = {1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 0, 1, 0};
    int size = 14;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            countZero++;
        }
        if (arr[i] == 1)
        {
            countOne++;
        }
    }

    cout << "Numbers of one :::  ";
    cout << countOne << endl;
    cout << endl;
    cout << "Numbers of Zero :::  ";
    cout << countZero << endl;
}