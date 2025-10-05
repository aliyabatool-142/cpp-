#include <iostream>
using namespace std;
void bubblesort(int arr[], int n){     //O(n&2)
     for (int i=0; i<n-1; i++){
        bool isSwap = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){        //array is aready sorted
            return;
        }
    }
}

void printarray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int arr[5] = {92,32,43,12,65};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    bubblesort(arr, n);
    printarray(arr, n);
    return 0;
}