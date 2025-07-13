#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {2, 3, 3, 4, 6, 8};
    int asize = 6;
    int brr[] = {1, 5, 7, 9, 10, 11, 3, 3, 4};
    int bsize = 9;
    vector<int> inter;

    for (int i = 0; i < asize; i++)
    {
        int element = arr[i];

        for (int j = 0; j < bsize; j++)
        {
            if (element == brr[j])
            {
                brr[j] = INT_MIN;
                inter.push_back(element);
            }
        };
    }

    for (auto value : inter)
    {
        cout << value << "  ";
    }
    cout << endl;
}