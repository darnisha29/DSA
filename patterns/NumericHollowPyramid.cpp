#include<iostream>
using namespace std;


int main() {
    int n;
    cin >>n;
    int start = 0;
    for(int row=0; row<n; row++){
        
        for(int col = 0; col<n-row-1; col++){
            cout << " * ";

        }
        if(row ==0 || row == n-1){
            for (int col = 0; col<row*2+1; col++) {
            if(col%2 == 0){
                if( row == n-1){

                    cout<<" ";
                }
               cout<<start;
               start = start + 1;
            } else {
                cout<<" _ ";
            }
        }

        }
        else {
            for(int col = 0; col<row*2+1; col++){
                if(col == 0){
                    cout<<col+1;
                }else if(col == row*2){
                    cout<<row+1;
                }else {
                    cout<<" _ ";
                }
            }
        }
        cout<<endl;
    }


     return 0;
}









    // for(int row = 0; row < n; row++){
    //                  int i = 1;
    //     for(int col=0; col <= n-row-1; col++){
    //         cout<<"   ";
    //     }
        
    //     for(int col = 0; col < row*2+1; col++ ){

    //         if(col == 0 && row != n-1) {
    //             cout<<col+1;  
    //         } else if(col == row*2 && row != n-1) {
    //             cout<<row+1;  
    //         } else if (row == n-1) {
               
    //             if(col%2 == 0){
    //                  cout<<" _ ";
                   
    //             }else {
    //                 cout<<i;
    //                 i++; 
    //             }
    //         } else {
    //             cout<<" _ ";
    //         }
            
        // }
        // cout<<endl;

    // }/