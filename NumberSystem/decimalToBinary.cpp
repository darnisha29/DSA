#include<iostream>
#include<cmath>
using namespace std;

void decimalToBinary(int n) {
    int bit = 0;
    while(n>0){
        bit = n%2;
        cout<<bit<<endl;
        n = n/2;
    }
}

int main() {
    int n;
    cout<<"Enter the number You want to convert in Binary :: "<<endl;
    cin>>n;
    decimalToBinary(n);
}
