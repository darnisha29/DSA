// replace each numbers of array with 1
#include<iostream>
using namespace std;

int main() {
    int arr[] = {2,29,8,4,1};
    for(int i = 0; i<5; i++ ){
        arr[i]= 1;
    }
    for (int a= 0 ; a<5;a++){
        cout<<arr[a];
    }

}