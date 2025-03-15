#include<iostream>
#include<cmath>
using namespace std;

int decimalToBinary(int n) {
    int bit = 0;
    int i = 0;
    int binaryno = 0;
    while(n>0){
        bit = n%2;
      binaryno =bit*pow(10,i++)+ binaryno;
        // cout<<bit<<endl;
        n = n/2;
    }
    return binaryno;
}

int main() {
    int n;
    cout<<"Enter the number You want to convert in Binary :: "<<endl;
    cin>>n;
    cout<<endl;
    int binary  = decimalToBinary(n);
    cout<<binary;
}
