#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {2, 3, 4, 6, 8};
    int asize = 5;
    int brr[] = {1, 5, 7, 9, 10, 11, 2, 3, 4};
    int bsize = 9;
    vector<int> inter;

    for (int i = 0; i < asize; i++)
    {
        int element = arr[i];

        for (int j = 0; j < bsize; j++)
        {
            if (element == brr[j])
            {
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