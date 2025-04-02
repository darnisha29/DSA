// print double value of each numbers in array
#include<iostream>
using namespace std;

int main() {
    int arr[5];
    cout<< "Enter 5 numbers you want double";
    for (int i = 0; i<5; i++ ){
        cin>>arr[i];
    }
    for (int i = 0; i<5; i++ ){
        arr[i] = arr[i]*2;
        cout<<arr[i]<<" ";
        }
}