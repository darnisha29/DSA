#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 3};
    int asize = 7;
    int brr[] = {3, 3, 8, 9, 7, 4};
    int bsize = 6;

    vector<int> unionArr;

    for (int i = 0; i < asize; i++)
    {
        int element = arr[i];
        for (int j = 0; j < bsize; j++)
        {
            if (element == brr[j])
            {
                brr[j] = INT_MIN;
            }
        }
    }
    for (int i = 0; i < asize; i++)
    {
        unionArr.push_back(arr[i]);
    }
    for (int j = 0; j < bsize; j++)
    {
        if (brr[j] != INT_MIN)
        {
            unionArr.push_back(brr[j]);
        }
    }

    cout << "Union Array ::: " << endl;
    for (auto value : unionArr)
    {
        cout << value << " ";
    }
    cout << endl;
    return 0;
}