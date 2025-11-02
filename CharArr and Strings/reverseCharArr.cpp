#include <iostream>
#include <cstring>
using namespace std;
void reverseCharArr(char arr[])
{
    int s = 0;
    int n = strlen(arr);
    int e = n - 1;

    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}
int main()
{
    char arr[] = "abc";
    cout << arr << endl;
    reverseCharArr(arr);
    cout << arr << endl;
}