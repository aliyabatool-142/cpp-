#include <iostream>
using namespace std;
int main(){
    int arr[]= {5, 2, 9, 1, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    //bubble sorted algorithm
    for (int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                //swap elements
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    //output sorted array
    cout<<"Sorted Array: \n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}