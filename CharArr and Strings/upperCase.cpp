#include <iostream>
#include <cstring>
using namespace std;

void convertToUpperCase(char word[])
{
    for (int i = 0; i < strlen(word); i++)
    {
        word[i] = word[i] - 'a' + 'A';
    }
}
void convertToLowerCaes(char word[])
{
    for (int i = 0; i < strlen(word); i++)
    {
        word[i] = word[i] - 'A' + 'a';
    }
}

int main()
{
    char word[] = "apple";
    convertToUpperCase(word);
    cout << "UpperCase :: " << word << endl;
    convertToLowerCaes(word);
    cout << "LowerCase :: " << word << endl;
}