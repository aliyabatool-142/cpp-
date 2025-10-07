#include<iostream>
using namespace std;
void selectionsort(int arr[], int n){
      for(int i=0; i<n-1; i++){
        int smallestIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[smallestIndex]){
                smallestIndex = j;
            }
        }
        swap(arr[i], arr[smallestIndex]);
    }
}

void printarray(int arr[], int n){
     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {23,42,11,78,56,45};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionsort(arr,n);
    printarray(arr,n);
    return 0;
   
}

//Time complexity = O(n^2)