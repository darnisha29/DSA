#include <iostream>
#include <cstring>
using namespace std;

bool palindrome(char word[])
{
    int i = 0;
    int n = strlen(word);
    int j = n - 1;

    while (i <= j)
    {
        if (word[i] != word[j])
        {
            return false;
        }
        i++;
        j++;
    }
    return true;
}

int main()
{
    char word[] = "racecar";
    if (palindrome)
    {
        cout << " :: Word is palindrome :: " << endl;
    }
    else
    {
        cout << ":: Not Palindrome ::" << endl;
    }
}