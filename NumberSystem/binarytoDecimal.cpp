#include<iostream>
#include<cmath>
using namespace std;


int binaryToDecimal (int n) {
    int decimal = 0;
    int i = 0;
    while(n){
       int bit = n%10;
        decimal = decimal + bit*pow(2,i++);
        n = n/10;
    }
    return decimal;
} 

int main () {
    int n;
    cout<<"Enter a binary number: ";
    cin>>n;
    int decimalValue = binaryToDecimal(n);
    cout<<"The decimal equivalent of binary number "<<n<<" is "<<decimalValue<<endl;

}