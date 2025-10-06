#include <iostream>
using namespace std;
int main(){
    int arr[5] = {92,32,43,12,65};
    int n = sizeof(arr)/sizeof(arr[0]);
    //bubble sort
    for (int i=0; i<n-1; i++){      //no. of passes
        bool flag = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = true;     //true means swapping ho rahe ha
            }
        }
        if(flag==false) break;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}