#include <iostream>
using namespace std;
// int main(){
//     int arr[2][3] = {{1,2,3,},{4,5,6,}};
//     int rows = sizeof(arr)/sizeof(arr[0]);
//     int cols = sizeof(arr[0])/sizeof(arr[0][0]);

//     for(int i=0; i<rows; i++){
//         for(int j=0;j<cols; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


//also correct initialization
int main(){
    int arr[][3] = {1,2,3,4,5,6};
    int rows = sizeof(arr)/sizeof(arr[0]);
    int cols = sizeof(arr[0])/sizeof(arr[0][0]);

    for(int i=0; i<rows; i++){
        for(int j=0;j<cols; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}