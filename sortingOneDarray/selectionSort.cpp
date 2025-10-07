#include <iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]= {5,4,2,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n-1; i++){
        int mn = INT_MAX;
        int mindex = -1;
        for(int j=i; j<n; j++){
            if(arr[j]<mn){
                mn = arr[j];
                mindex = j;
            }

        }
        //swap ith and mindexth element
        swap(arr[i], arr[mindex] );
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

//Time complexity = O(n^2)